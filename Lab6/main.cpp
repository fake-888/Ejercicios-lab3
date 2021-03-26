#include <iostream>
using namespace std;
#include "INTEGER.hpp"
#include "CHAR.hpp"
#include "STRING.hpp"
int main(){
    STRING titulos;    
    STRING palabra;    
    STRING fin_linea;
    CHAR letra1;
    CHAR letra2;
    INTEGER x;
    INTEGER y;
    INTEGER z;
    INTEGER w;    

    fin_linea<<"";

    x<<1;
    y<<-2;
    z<<6;

    titulos<<"x+y:";
    !titulos;
    !(x+y);
    !fin_linea;

    titulos<<"w = z*y+x | (w-y)/z:";
    !titulos;
    w << z*y+x;
    !((w-x)/z);
    !fin_linea;
    
    titulos<<"Acumulando letras: ";
    !titulos;
    letra1<<'n';
    letra2<<'w';
    !(letra1+letra2);
    !fin_linea;

    palabra << letra1+letra2;
    
    titulos<<"palabra*5: ";
    !titulos;
    !(palabra*5);
    !fin_linea;

    titulos<<"Imprimir letra: ";
    !titulos;
    letra1<<letra2;
    !letra2;

    return 0;
}
