#pragma once

#include "Cuenta.h"

class CuentaAhorros : public Cuenta
{
public: 
	CuentaAhorros( double, double );

	double calcularInteres() const;

private: 
	double tasaInteres;
};