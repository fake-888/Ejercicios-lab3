#include <iostream>
#include <string>
#include <fstream>
#include "Usuario.hpp"

using namespace std;
#pragma once

class Publicacion{
private:
		int id_Publicacion;
		string titulo;
		Usuario* autor;
		string texto;
		string fecha_Publicacion;
	public:
		Publicacion();
		Publicacion(int,string,Usuario*,string,string);
		~Publicacion();
		void guardar_Publicacion(ofstream*);
		Publicacion* cargar_Publicacion(ifstream*);
};