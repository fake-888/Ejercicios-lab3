#include <iostream>

#include "Cuenta.h"
using namespace std; 

Cuenta::Cuenta(double b) : balance(0)
{

	if (b >= 0.0f)
	{
		balance = b;
	}
	else {
		cout << "El monto a cargar excedio el saldo de la cuenta. ";
	}
}	

	//credito
void Cuenta::credito(double c) {
	if (c >= 0.0f) {
		balance += c;
	}
	else {
		cout << "No se puede acreditar una cantidad negativa; balance sin cambios.";
	}
}

	//debito
bool Cuenta::debito(double d)
{
	if (d >= 0.0f)
	{
		if (d <= 0.0f)
		{
			balance -= d;
			return true;
		}
		else {
			return false;
		}
	}
	cout << "No se puede acreditar una cantidad negativa; balance sin cambios.";
	return false;
}

