#include <iostream>
#include "Caja.h"

//Constructor
Caja::Caja()
{
	setAlto(1.0);
	setAncho(1.0);
	setLargo(1.0);

}

Caja::Caja(double _altura, double _anchura, double _largo)
{
	setAlto(_altura);
	setAncho(_anchura);
	setLargo(_largo);
}

double Caja::obtenerVolumen()
{
	return largo * ancho * alto;
}

void Caja::setAlto(double _altura)
{
	if (_altura >= 0.0)
		alto = _altura;
	else {
		alto = 1.0;
		cout << "El valor esta incorrecto, debe de ser arriba de 1" << endl;
	}
}	

void Caja::setAncho(double _anchura)
{
	if (_anchura >= 0.0)
		ancho = _anchura;
	else {
		ancho = 1.0;
		cout << "El valor esta incorrecto, debe de ser arriba de 1" << endl;
	}
}

void Caja::setLargo(double _anchura)
{
	if (_anchura >= 0.0)
		largo = _anchura;
	else {
		ancho = 1.0;
		cout << "El valor esta incorrecto, debe de ser arriba de 1" << endl;
	}
}

double Caja::getAlto()
{
	return alto;
}

double Caja::getAncho()
{
	return ancho;
}

double Caja::getLargo()
{
	return largo;
}

