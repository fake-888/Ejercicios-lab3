#include "Album.hpp"
Album::Album() {

}
Album::Album(string nombre,string artista_A,vector<Cancion*> canciones) {
    this->nombre = nombre;
    this->artista_A = artista_A;
    this->canciones = canciones;
}
string Album::get_Nombre(){
    return nombre;
}

void Album::set_Nombre(string nombre){
    this->nombre = nombre;
}

string Album::get_Artista_A(){
    return artista_A;
}

void Album::set_Artista_A(string artista){
    this->artista_A = artista_A;
}

Album::~Album() {
    for (int i = 0;i<canciones.size();i++) {
        delete canciones.at(i);
    }
    canciones.clear();
}

vector<Cancion*> Album::get_Canciones(){
    return canciones;
}

void Album::agregar_Cancion(Cancion* cancion){
    canciones.push_back(cancion);
}
Album* Album::operator*(int a){
	Album* res = new Album();
	string nom = this->get_Nombre()+ " " + std::to_string(a) + " veces";
	for(int i = 0;i<a;i++){
		for(int j = 0;j<this->canciones.size();j++){
			res->get_Canciones().push_back(this->canciones.at(j));
		}
	}
	res->set_Nombre(nom);
	return res;
}
Album* Album::operator+(Cancion* c){
	Album* res;
    vector<Cancion*> aux;
    aux = this->get_Canciones();
    aux.push_back(c);
    for(int i = 0;i<aux.size();i++){
    	Cancion* aux2 = aux.at(i);
    	res->agregar_Cancion(aux2);
	}
	return res;
}
