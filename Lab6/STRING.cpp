#include <iostream>
#include <string>

#include "STRING.hpp"
// #include "CHAR.hpp"

using namespace std;

void STRING::operator<<(string cadena){
    this->cadena = cadena;
}
void STRING::operator<<(STRING temp){
    this->cadena = temp.cadena;
}

void STRING::operator!(){
    cout << this->cadena << endl;
}

STRING STRING::operator*(int valor){
    string temp;

    for (int i = 0; i < valor; i++){
        temp += cadena;
    }
    STRING string_temporal;
    string_temporal << temp;

    return string_temporal;

}
