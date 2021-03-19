#include <conio.h>
#include "Blog.hpp"
#include "Publicacion.hpp"
#include "Usuario.hpp"


int main() {

	Blog* blog = new Blog();
	ifstream* if_users = new ifstream("doc_users.bin",ios::binary | ios::in);
	if_users->seekg(0,ios::end);
	
	if(if_users->tellg()==0) {
		if_users->close();
	} else {
		if_users->close();
		ofstream* of_users = new ofstream("doc_users.bin",ios::binary | ios::out);
		Usuario* user = new Usuario(0,"admin","1111",true);
		of_users->write((char *) &user, sizeof(user));
		}

	getch();
	return 0;
}