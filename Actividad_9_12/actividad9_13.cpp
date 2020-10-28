#include "rectangulo.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Rectangulo::Rectangulo( Coordenadas2D _ladoIa, Coordenadas2D _ladoDa, Coordenadas2D _ladoIab, Coordenadas2D _ladoDab ) 
{
    establecerRectangulo( _ladoIa, _ladoDa, _ladoIab, _ladoDab );
}


void Rectangulo::establecerRectangulo( Coordenadas2D _ladoIa, Coordenadas2D _ladoDa, Coordenadas2D _ladoIab, Coordenadas2D _ladoDab)
{
    if (( _ladoIa.obtenerX() < 20.0f && _ladoIa.obtenerY() < 20.0f) && (_ladoDa.obtenerX() < 20.0f && _ladoDa.obtenerY() < 20.0f) && 
        (_ladoIab.obtenerX() < 20.0f && _ladoIab.obtenerY() < 20.0f) && (_ladoDab.obtenerX() < 20.0f && _ladoDab.obtenerY() < 20.0f) )
    {
        if ( _ladoIa.obtenerX() != _ladoIab.obtenerX() || _ladoDa.obtenerX() != _ladoDab.obtenerX() )
        {
            throw std::invalid_argument( "Lado Izquierda y Derecha de X coordenadas no emparejan.");
        }
        else {
            ladoIa = _ladoIa;
            ladoIab = _ladoIab;
            ladoDa = _ladoDa;
            ladoDab = _ladoDab;

            if (!esRectangulo() ) 
            {
                throw std::invalid_argument( "Las cordenadas no representan un rectangulo" );
            }
        }
    }
    else {
        throw std::invalid_argument( "Las coordenadas tienen que ser < 20.0" );
    }
}
    double Rectangulo::obtenerAnchura() 
{ 
        return ladoDab.obtenerY() - ladoDa.obtenerY();
}
 
    double Rectangulo::obtenerLongitud() 
{ 
        return ladoDa.obtenerX() - ladoIa.obtenerX();
}

    double Rectangulo::obtenerPerimetro() 
{
      return ( 2 * obtenerAnchura()) + (2 * obtenerLongitud() );
}

    double Rectangulo::obtenerArea()
{     
        return obtenerAnchura() * obtenerLongitud(); 
}
 
bool Rectangulo::esRectangulo() 
{ 
    return obtenerAnchura() != obtenerLongitud(); 
}

int main(int argc, const char* argv[]) {
    Coordenadas2D ab(2, 5;
    Coordenadas2D cd(1, 10);
    Coordenadas2D de(4, 20);
    Coordenadas2D ef(20, 4);

    Rectangulo g1(ab, cd, de, ef);

    cout << "Anchura: " << g1.obtenerAnchura << "\nlongitud: " << g1.obtenerLongitud() << "\nArea: " << g1.obtenerArea() << "\nPerimetetro: " 
         << g1.obtenerPerimetro() << std::endl;
    
    return 0;
}