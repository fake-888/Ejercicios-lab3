#pragma once

class Coordenadas2D 
{
public:
    
    explicit Coordenadas2D (int x = 0, int y = 0) {
        establecerX(x);
        establecerY(y);
    }

    void establecerX( int x ) 
    {
        x1 = x; 
    }
    void establecerY( int y ) 
    { 
        y1 = y; 
    }

    int obtenerX() 
    { 
        return x1; 
    }
    
    int obtenerY() 
    { 
        return y1; 
    }

private: 
    int x1, y1; 
    
};
