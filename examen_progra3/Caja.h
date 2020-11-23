#pragma once
#ifndef caja_h
#define caja_H

#include <iostream>
using namespace std;

class Caja {
public:
	Caja();
	Caja(double, double, double);

	void setLargo(double);
	double getLargo();

	void setAncho(double);
	double getAncho();

	void setAlto(double);
	double getAlto();

	double obtenerVolumen();


private:
	double largo, ancho, alto;
};

#endif 

