#include <iostream>
#include "Jugador_Humano.hpp"
#include "Jugador.hpp"

using namespace std;
int main() {
	int opcion = 0;
	while(opcion!=2) {
		cout<<"Ingrese Opcion: "<<endl;
		cout<<"1) Iniciar Juego"<<endl;
		cout<<"2) Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		if(opcion==1) {
			int opcion2 = 0;
			int cont = 0;
			if(cont != 2) {
				cout<<"Ingrese Opcion: "<<endl;
				cout<<"1) Jugador vs Jugador"<<endl;
				cout<<"2) Jugador vs Pc"<<endl;
				cout<<"Opcion: ";
				cin>>opcion2;
				if(opcion2 == 1) {
					string nombre;
					cout<<"Jugador 1 Ingrese su nombre: ";
					cin>>nombre;
					Jugador j1 = Jugador_Humano(nombre);
					string nombre2;
					cout<<"Jugador 2 Ingrese su nombre: ";
					cin>>nombre2;
					Jugador j2 = Jugador_Humano(nombre2);
				}
			}
		}
	}
	return 0;
}