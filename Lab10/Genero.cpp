#include"Genero.hpp"

Genero::Genero() {}

Genero::Genero(int id_Genero,string nombre) {
	this->nombre = nombre;
}
Genero::~Genero() {}

string Genero::get_Nombre() {
	return nombre;
}

int Genero::get_IdGenero() {
	return id_Genero;
}
void Genero::set_Id_Genero(int id_Genero) {
	this->id_Genero=id_Genero;
}
void Genero::set_Nombre(string nombre) {
	this->nombre = nombre;
}