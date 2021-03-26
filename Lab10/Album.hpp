#include<iostream>
#include<string>
#include<vector>
#include"Cancion.hpp"

using namespace std;

#pragma once
class Album {
	private:
		string nombre;
		string artista_A;
		vector<Cancion*> canciones;
	public:
		Album();
		Album(string,string,vector<Cancion*>);
		~Album();
		string get_Nombre();
		string get_Artista_A();
		vector<Cancion*> get_Canciones();
		void set_Nombre(string);
		void set_Artista_A(string);
		void agregar_Cancion(Cancion*);
		Album* operator*(int);
		Album* operator+(Cancion*);
};
 