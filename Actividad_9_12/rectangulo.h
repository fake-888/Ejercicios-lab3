#pragma once

#include "coordenadas_Cartesianas.h"

class Rectangulo 
{
public:
    Rectangulo( Coordenadas2D, Coordenadas2D, Coordenadas2D, Coordenadas2D );

    void establecerRectangulo( Coordenadas2D, Coordenadas2D, Coordenadas2D, Coordenadas2D );
 
    double obtenerAnchura();
    double obtenerLongitud();
    double obtenerPerimetro();
    double obtenerArea();

    bool esRectangulo();

private:
    Coordenadas2D ladoIa;// Izquierda arriba
    Coordenadas2D ladoDa;//  derecha arriba
    Coordenadas2D ladoIab;// izquierda abajo
    Coordenadas2D ladoDab;//  derecha abajo
};