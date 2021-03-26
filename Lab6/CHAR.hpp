#include "STRING.hpp"

#pragma once
class CHAR{

private:  
    char caracter;

public:
     
    STRING operator+(CHAR);
    void operator<<(char);
    void operator<<(CHAR);
    void operator!();
    ~CHAR(); 
};
 