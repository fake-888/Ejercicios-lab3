#include <cstring>
#include <iostream>

#include "CHAR.hpp"


using namespace std;

void CHAR::operator<<(char caracter) {
	this->caracter = caracter;
}
void CHAR::operator<<(CHAR temp) {
	this->caracter = temp.caracter;
}
void CHAR::operator!() {
	std::cout << this->caracter << std::endl;
}

STRING CHAR::operator+(CHAR segundo_caracter) {

	string cadena_temp1;
	cadena_temp1 = this->caracter;
	cadena_temp1 += segundo_caracter.caracter;
	STRING nueva_cadena;
	nueva_cadena << cadena_temp1;
	return nueva_cadena;
}


CHAR::~CHAR() {}
