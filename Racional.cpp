#include "Racional.h"
#include <iostream>
#include <cmath>

using namespace std;

Racional::Racional() : numerador(1), denominador(1)
{}

Racional::Racional(int _num, int _den) : numerador(_num), denominador(_den)
{
	simplificar();
}

void Racional::imprimirRacional() // 3/4
{
	if (numerador == 0 && denominador == 0)
	{
		cout << "Resultado indefinido\n";
		return;
	}
	else if (denominador == 0)
	{
		cout << "No se puede dividir por cero\n";
		return;
	}

	cout << numerador << "/" << denominador << "\n";
}

void Racional::imprimirDecimal() // 0.75
{
	if (numerador == 0 && denominador == 0)
	{
		cout << "Resultado indefinido\n";
		return;
	}
	else if (denominador == 0)
	{
		cout << "No se puede dividir por cero\n";
		return;
	}

	cout << (float(numerador) / float(denominador)) << "\n";

}

Racional Racional::suma(Racional r2)
{

	//cuando ambos denominadores sean iguales
	if (this->denominador == r2.denominador)
		return Racional(this->numerador + r2.numerador, r2.denominador);
	else
		return Racional((this->numerador * r2.denominador) + (r2.numerador * this->denominador),
			this->denominador * r2.denominador);
}

Racional Racional::resta(Racional r2)
{
	//cuando ambos denominadores sean iguales
	if (this->denominador == r2.denominador)
		return Racional(this->numerador - r2.numerador, r2.denominador);
	else
		return Racional((this->numerador * r2.denominador) - (r2.numerador * this->denominador),
			this->denominador * r2.denominador);
}

void Racional::simplificar()
{
	int mayor = numerador > denominador ? numerador : denominador;

	for (int i = 2; i <= mayor; i++)
	{
		if (numerador % i == 0 && denominador % i == 0)
		{
			numerador = numerador / i;
			denominador = denominador / i;

			i = 1;
		}
	}
}

Racional Racional::multiplicacion(Racional r2)
{

	return Racional(this->numerador * r2.numerador, this->denominador * r2.denominador);

}

Racional Racional::division(Racional r2)
{

	return Racional(this->numerador * r2.denominador, this->denominador * r2.numerador);

}

Racional Racional::potencia(int exponente)
{

	return Racional(pow(this->numerador, exponente), pow(this->denominador, exponente));

}

bool Racional::operator==( const Racional& r2 ) const
{
	return (numerador == r2.numerador && denominador == r2.denominador);
}

bool Racional::operator!=( const Racional& r2 ) const  
{
	return !( *this == r2 );
}

bool Racional::operator>(const Racional& r2 ) const
{
	return ()
}

	ostream& operator<<(std::ostream& out, const Racional& r2) 
{
	out << '(' << r2.numerador << '/' << r2.denominador << ')';

	return out;
}
std::istream& operator>>( istream& in, Racional& r2 ) 
{
	in >> r2.numerador >> r2.denominador;

	return in;
}
