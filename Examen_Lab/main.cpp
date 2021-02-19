#include<iostream>
#include<istream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//Clase Resultados.  Administrador.
using namespace std;

class Resultados {
	private :
		int Njuego;
		int ArrResultado[10];
		string ArrEquipos[10];

	public:
		int _Njuego,ResultadoE1, ResultadoE2;
		string NombreEquipo1, NombreEquipo2;
		Resultados ();
		void DefinirPartido();
		void DefinirGanador();
		void MostrarPartidos();
		void MostarInfo();
};

int ContadorNjuegos=0;
Resultados::Resultados () {
	Njuego = ContadorNjuegos + 1;
	ContadorNjuegos++;
}

void Resultados::DefinirGanador() {
	cout<<"Ingrese los resultados del Partido: "<<Njuego<<endl;
	cout<<ArrEquipos[0]<<" ";
	cin>>ArrResultado[0];
	cout<<ArrEquipos[1]<<" ";
	cin>>ArrResultado[1];
}

void Resultados::DefinirPartido() {
	string NombreEquipo1,  NombreEquipo2;
	cout<<"Ingrese los equipos a Jugar partido: "<< Njuego <<endl;
	cin >> ArrEquipos[0];
	cin >> ArrEquipos[1];
}

void Resultados::MostarInfo() {
	cout<<"Hola el resultado del Partido: "<< Njuego << " es: ";
	cout<< ArrEquipos[0]<< " "<<ArrResultado[0]<< " - "	<< ArrEquipos[1] <<" "<< ArrResultado[1]<<endl;
}

void Resultados::MostrarPartidos() {
	cout<<Njuego<<" "<<ArrEquipos[0]<<" Vs "<<ArrEquipos[1]<<endl;
}
 
int main() {
	int Seleccion,Seleccion1;
	cout<< "Liga Honduras" <<endl;
	Resultados Partido1 =Resultados();
	Resultados Partido2 =Resultados();
	
	do {
		cout<<"\n1.Mostrar Resultados,\n2.Salir"<<endl;
		cout<<"\nTu Eleccion aqui---> ";
		cin>>Seleccion1;
		system ("cls");
		
		switch(Seleccion1) {
			case 1: {
				do {
					cout<<"Ingrese la accion a realizar"<<"\n1.Definir encuentros,\n2.Llenar resultados,\n3.Mostrar Resultados,\n4.salir"<<endl;
					cout<<"\nTu Eleccion aqui---> ";
					cin>>Seleccion;
					system ("cls");

					switch(Seleccion) {
						case 1: {
							Partido1.DefinirPartido();
							Partido2.DefinirPartido();
							system ("pause");
							system ("cls");
							break;
						}
						case 2: {
							Partido1.DefinirGanador();
							Partido2.DefinirGanador();
							system ("pause");
							system ("cls");
							break;
						}
						case 3: {
							Partido1.MostarInfo();
							Partido2.MostarInfo();
							system ("pause");
							system ("cls");
							break;
						}
					}
				} while(Seleccion<4);
				break;
			}
			case 2: {
				Partido1.MostrarPartidos();
				Partido2.MostrarPartidos();
				system ("pause");
				system ("cls");
				break;
			}
			case 3: {
				Partido1.MostarInfo();
				Partido2.MostarInfo();
				system ("pause");
				system ("cls");
				break;
			}
		}
	} while(Seleccion1<4);
		
	system ("cls");

	return 0;
}