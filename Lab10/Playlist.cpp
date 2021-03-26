#include"Playlist.hpp"

Playlist::Playlist() {

}
Playlist::Playlist(string nombre) {
    this->nombre = nombre;
}
Playlist::Playlist(string nombre, vector<Cancion*>canciones) {
    this->nombre = nombre;
    this->canciones = canciones;
}
Playlist::~Playlist(){
	
}
string Playlist::get_Nombre(){
    return nombre;
}

void Playlist::set_Nombre(string nombre){
    this->nombre = nombre;
}

vector<Cancion*> Playlist::get_Canciones(){
    return canciones;
}

void Playlist::set_Canciones(vector<Cancion*>cancione){
    this->canciones = cancione;
}

Playlist* Playlist::operator+(Cancion* c){
	Playlist* retVal = new Playlist(this->nombre);
	this->canciones.push_back(c);
	retVal->set_Canciones(this->canciones);
	return retVal;       
}

Playlist* Playlist::operator+(Album* a){
	Playlist* res = new Playlist(this->nombre);
    for(int i = 0;i<a->get_Canciones().size();i++){
    	Cancion* aux2 = a->get_Canciones().at(i);
    	this->canciones.push_back(aux2);
	}
	return res;
}
Playlist* Playlist::operator+(Playlist* p){
	Playlist* res = new Playlist(this->nombre);
    for(int i = 0;i<p->get_Canciones().size();i++){
    	Cancion* aux2 = p->get_Canciones().at(i);
    	this->canciones.push_back(aux2);
	}
	return res;
}
Playlist* Playlist::operator-(Cancion* c){
	Playlist* res = new Playlist();
    vector<Cancion*> aux;
    string nom = c->get_Nombre();
    aux = this->get_Canciones();
    for(int i = 0;i<aux.size();i++){
    	Cancion* aux2 = aux.at(i);
    	string nom2 = aux2->get_Nombre();
    	if(nom==nom2){
    		aux.erase(aux.begin()+i);
		}
	}
	if(!aux.empty()){
		for(int i = 0;i<aux.size();i++){
			Cancion* aux3 = aux.at(i);
	    	res->agregarCancion(aux3);
    	}
    	return res;
	}else{
		cout<<"La playlist se vacio"<<endl;
		return res;
	}
}
Playlist* Playlist::operator-(Genero* g){
	Playlist* res;
    vector<Cancion*> aux;
    string nom = g->get_Nombre();
    aux = this->get_Canciones();
    for(int i = 0;i<aux.size();i++){
    	Cancion* aux2 = aux.at(i);
    	Genero* gen = aux2->get_Genero_C();
    	string nom2 = gen->get_Nombre();
    	if(nom!=nom2){
    		res->agregarCancion(aux2);
		}
	}
	return res;
}
