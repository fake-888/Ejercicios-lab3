#include<iostream>
#include<string>
#include"Genero.hpp"

using namespace std;

#pragma once
class Cancion {
	private:
		string nombre;
		string artista_C;
		Genero* genero_C;
		string duracion;
	public:
		Cancion();
		Cancion(string,string,Genero*,string);
		~Cancion();
		string get_Nombre();
		string get_Artista_C();
		Genero* get_Genero_C();
		string get_Duracion();
		void set_Nombre(string);
		void set_Artista_C(string);
		void set_Genero_C(Genero*);
		void set_Duracion(string);
};