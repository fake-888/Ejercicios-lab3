#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Usuario.hpp"
#include "Publicacion.hpp"

using namespace std;

#pragma once
class Blog{
	private:
		string nombre = "You_Blog";
		vector<Usuario*> usuarios;
	public:
		Blog();
		Blog(string);
		~Blog();
		vector<Usuario*> get_Usuarios();
		void set_Usuarios(vector<Usuario*>);
		void ver_Publicaciones();
		bool compare(Publicacion*,Publicacion*);
		void cargar_Archivos(string,string);
		void escribir_Usuarios(string);
		void escrbir_Publicaciones(string);
};