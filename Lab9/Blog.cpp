#include "Blog.hpp"

Blog::Blog(){
}

Blog::Blog(string nombre){
	this -> nombre=nombre;
}

Blog::~Blog(){
}

vector<Usuario*> Blog::get_Usuarios(){
	return this -> usuarios;
}

void Blog::set_Usuarios(vector<Usuario*> usuarios){
	this -> usuarios = usuarios;
}

void Blog::ver_Publicaciones(){	
}

bool Blog::compare(Publicacion* first, Publicacion* second){
	return true;
}

void Blog::cargar_Archivos(string a, string b){	
}

void Blog::escribir_Usuarios(string user){	
}

void Blog::escrbir_Publicaciones(string a){	
}