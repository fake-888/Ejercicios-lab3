#include <iostream>

#include "INTEGER.hpp"

void INTEGER::operator<<(int valor){
    entero = valor;
}
void INTEGER::operator<<(INTEGER temporal){
    entero = temporal.entero;
}

void INTEGER::operator!(){
    std::cout << entero << std::endl;
}


INTEGER INTEGER::operator+(INTEGER valor_suma){
    INTEGER temporal;
    temporal << entero + valor_suma.entero;
    return temporal;
}
INTEGER INTEGER::operator-(INTEGER valor_resta){
    INTEGER temporal;
    temporal << entero - valor_resta.entero;
    return temporal;
}

INTEGER INTEGER::operator*(INTEGER valor_multiplicacion){
    INTEGER temporal;
    temporal << entero * valor_multiplicacion.entero;
    return temporal;
}

INTEGER INTEGER::operator/(INTEGER valor_division){
    INTEGER temporal;
    temporal << entero / valor_division.entero;
    return temporal;
}

INTEGER::~INTEGER(){}