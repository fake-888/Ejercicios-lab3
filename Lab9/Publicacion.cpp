#include "Publicacion.hpp"

Publicacion::Publicacion(){
}

Publicacion::Publicacion(int id_Publicacion, string titulo, Usuario* autor, string texto, string fecha_Publicacion){
	this -> id_Publicacion = id_Publicacion;
	this -> titulo = titulo;
	this -> autor = autor;
	this -> texto = texto;
	this -> fecha_Publicacion = fecha_Publicacion;
}

Publicacion::~Publicacion(){
}

void Publicacion::guardar_Publicacion(ofstream* o){
}