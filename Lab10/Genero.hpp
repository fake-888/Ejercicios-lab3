#include <iostream>
#include <string>

using namespace std;

#pragma once
class Genero {
	private:
		int id_Genero;
		string nombre;

	public:
		Genero();
		Genero(int,string);
		~Genero();
		int get_IdGenero();
		void set_Id_Genero(int);
		string get_Nombre();
		void set_Nombre(string);

};