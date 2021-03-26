#include "Cancion.hpp"

Cancion::Cancion() {

}
Cancion::Cancion(string nombre, string artista_C, Genero* genero_C, string duracion) {
    this->nombre = nombre;
    this->artista_C = artista_C;
    this->genero_C = genero_C;
    this->duracion = duracion;
}
Cancion::~Cancion() {

}
string Cancion::get_Nombre(){
    return nombre;
}

void Cancion::set_Nombre(string nombre){
    this->nombre = nombre;
}

string Cancion::get_Artista_C(){
    return artista_C;
}

void Cancion::set_Artista_C(string artista_C){
    this->artista_C = artista_C;
}

Genero* Cancion::get_Genero_C(){
    return genero_C ;
}

void Cancion::set_Genero_C(Genero* genero_c){
    genero_c = genero_c;
}

string Cancion::get_Duracion(){
    return duracion;
}

void Cancion::set_Duracion(string duracion){
    this->duracion = duracion;
}
