#include <iostream>
#include <string>
#include <vector>
#include <fstream>
//#include "Publicacion.hpp"


using namespace std;


#pragma once

class Publicacion;
class Usuario{
	private:
		int id;
		string user_name;
		string contrasena;
		bool es_Admin;
		vector<Publicacion*> publicaciones;
	public:
		Usuario();
		Usuario(int,string,string,bool);
		~Usuario();
		int get_ID();
		void set_ID(int);
		string get_User();
		void set_User(string);
		string get_Pass();
		void set_Pass(string);
		bool get_Admin();
		void set_Admin(bool);
		vector<Publicacion*> get_Publicaciones();
		void set_Publicaciones(vector<Publicacion*>);
		void guardar_Usuario(ofstream*);
		Usuario* cargar_Usuario(ifstream*);
};