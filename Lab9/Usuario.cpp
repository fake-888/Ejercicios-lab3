#include "Usuario.hpp"

Usuario::Usuario(){
}

Usuario::Usuario(int id, string user_name, string contrasena, bool es_Admin){
	this -> id = id;
	this -> user_name = user_name;
	this -> contrasena = contrasena;
	this -> es_Admin = es_Admin;
}

Usuario::~Usuario(){
}

int Usuario::get_ID(){
	return this -> id;
}

void Usuario::set_ID(int id){
	this -> id = id;
}

string Usuario::get_User(){
	return this -> user_name;
}

void Usuario::set_User(string user_name){
	this -> user_name = user_name;
}

string Usuario::get_Pass(){
	return this -> contrasena;
}

void Usuario::set_Pass(string contrasena){
	this -> contrasena = contrasena;
}

bool Usuario::get_Admin(){
	return this-> es_Admin;
}

void Usuario::set_Admin(bool es_Admin){
	this -> es_Admin = es_Admin;
}

void Usuario::guardar_Usuario(ofstream* s){	
}

Usuario* Usuario::cargar_Usuario(ifstream* i){
}