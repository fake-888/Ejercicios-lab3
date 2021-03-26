#include<iostream>
#include<vector>
#include"Cancion.hpp"
#include "Album.hpp"
#include "Genero.hpp"

using namespace std;

#pragma once
class Playlist {
	private:
		string nombre;
		vector<Cancion*> canciones;
	
	public:
		Playlist();
		Playlist(string);
		Playlist(string, vector<Cancion*>);
		~Playlist();
		string get_Nombre();
		vector<Cancion*> get_Canciones();
		void set_Canciones(vector<Cancion*>);
		void set_Nombre(string);
		Playlist* operator+(Cancion*);
		Playlist* operator+(Playlist*);
		Playlist* operator+(Album*);
		Playlist* operator-(Cancion*);
		Playlist* operator-(Genero*);
};
