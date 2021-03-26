#include <string>

using namespace std; 
#pragma once
class STRING{

private: 
    string cadena;
public:
    
    void operator<<(std::string);
    void operator<<(STRING);
    void operator!();
    STRING operator*(int);
};
# 
