#include "rectangulo.h"
#include <iostream>
#include <stdexcept>

Rectangulo::Rectangulo( Coordenadas2D _ladoIa, Coordenadas2D _ladoDa, Coordenadas2D _ladoIab, Coordenadas2D _ladoDab ) 
{
    establecerRectangulo( _ladoIa, _ladoDa, _ladoIab, _ladoDab );
}

// SETTERS
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
// check whether current object is rectangle
bool Rectangulo::esRectangulo() 
{ 
    return obtenerAnchura() != obtenerLongitud(); 
}