#include <iostream>
#include <cstdlib>
#include <fstream>
#include <locale.h>

using namespace std;
int main() {
	int codalm; 
	char desalm[50]; 
	char ubialm[4]; 
	float precalm;
	int numalm;
	int opc=0;
	char resp;

	ofstream escritura;
	escritura.open("Inventario.txt", ios::out | ios::app);

	do {
		system ("cls");
		setlocale (LC_CTYPE, "Spanish");
		cout << "          SISTEMA DE INVENTARIOS: MENU DE OPCIONES       " << endl
		     << " " << endl
		     << " " << endl
		     << "1. Ingresar datos de artículos" << endl // su función es capturar los datos de articulos
		     << " " << endl
		     << "2. Consultar datos de artículos" << endl // muestra el inventario
		     << " "<< endl
		     << "3. Salir la aplicaciónn" << endl
		     <<" "<< endl
		     <<"Seleccione su opción:";
		cin >> opc;
		switch(opc) {
			case 1:
				do {

					system("cls");
					cout << "Ingrese el codigo del producto: ";
					cin >> codalm;
					cout << "Describa el producto: ";
					cin >> desalm;
					cout << "Ingrese la ubicación de el producto en el almacen: ";
					cin >> ubialm;
					cout << "Ingrese el precio del producto: ";
					cin >> precalm;
					cout << "Ingrese el número del producto: ";
					cin >> numalm;
					escritura <<codalm<<" "
					          <<desalm<<" "
					          <<ubialm<<" "
					          <<precalm<<" "
					          <<numalm<<" "<<endl;
					escritura.close();
					cout << "Desea ingresar otro producto (S/N)?";
					cin >> resp;
				} while (resp=='S' || resp=='s');
				break;

			case 2:
				system ("cls");
				ifstream lectura;
				lectura.open("Inventario.txt", ios::out | ios::in);
				if(lectura.is_open()) {
					cout<<"  Registros de Inventario  "<<endl
					    <<"____________________________"<<endl;
					lectura>>codalm;
					while(!lectura.eof()) {
						lectura>>desalm
						       >>ubialm
						       >>precalm
						       >>numalm;
						cout<<"Codigo: " << codalm <<endl
						    <<"Descripción: "<< desalm <<endl
						    <<"Ubicación: " << ubialm <<endl
						    <<"Precio: " << precalm <<endl
						    <<"Número:	" << numalm <<endl;
						lectura>>desalm;
						cout<<"____________________________"<<endl;

						lectura.close();
					}

				}
				break;
		}
	} while(opc !=3);
	system ("pause");
	return 0;
}
