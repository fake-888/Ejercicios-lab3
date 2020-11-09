#include "CuentaAhorros.h"

CuentaAhorros::CuentaAhorros( double b, double tr ) : Cuenta( b ), tasaInteres( tr )
{
}

	//Calcular interes
double CuentaAhorros::calcularInteres() const
{
	return Cuenta::obtenerBalance() * tasaInteres;
}