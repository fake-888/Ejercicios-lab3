#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stack>
#include <conio.h>

using namespace std;

union DatoValor {
	unsigned int si_dato;
	int i_dato;
	float f_dato;
	char operador;
};

struct Dato {
	char c_tipo;
	DatoValor valor;
};

vector<string> tokenizer(string calle) {
	vector<string> token_r;
	string temp = "";
	for(int i = 0; i<calle.size(); i++) {
		if(calle.at(i)!=',') {
			temp+=calle.at(i);
		} else {
			token_r.push_back(temp);
			temp="";
		}
	}
	if(temp!="") {
		token_r.push_back(temp);
	}
	return token_r;
}

vector<Dato> convertir_Tokens(vector<string> tokens) {
	vector<Dato> data;

	for(int i = 0; i < tokens.size(); i++) {

		char aux;
		string token = tokens.at(i);
		aux = token[0];
		Dato d;
		char tipo;

		if(i==0) {
			d.c_tipo=aux;
			aux=tipo;
		}

		if(aux=='+'||aux=='-'||aux=='*'||aux=='/') {
			DatoValor dv;
			dv.operador=aux;
			d.valor=dv;
		} else {
			if(tipo=='I'||tipo=='i') {
				DatoValor dv;
				dv.i_dato=(int)aux;
				d.valor=dv;
			} else if(tipo=='F'||tipo=='f') {
				DatoValor dv;
				dv.i_dato=(float)aux;
				d.valor=dv;
			} else if(tipo=='B'||tipo=='b') {
				DatoValor dv;
				dv.i_dato=(unsigned int)aux;
				d.valor=dv;
			}
		}

		data.push_back(d);
	}

	return data;
}

void leer_Archivo() {
	string calloc = "";
	ifstream doc_txt ("Probando_leer.txt",ios::in);
	while (getline(doc_txt, calloc)) {
		vector <string> token_r1 = tokenizer(calloc);
		for(int i = 0; i<token_r1.size(); i++) {
			cout<<token_r1.at(i);
		}
	}
	doc_txt.close();
}

int main() {
	leer_Archivo();
	getch();
	return 0;
}

