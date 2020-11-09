#include <iostream>
#include "CuentaCheques.h"
using namespace std;

CuentaCheques::CuentaCheques( double b, double tpt ) : Cuenta( b ), tarifaPorTransaccion( tpt )
{
}

	//credito
void CuentaCheques::credito( double c )
{
	Cuenta::credito( c + tarifaPorTransaccion);
}

	//debito
void CuentaCheques::debito( double d )
{
	if ( Cuenta::debito( d ) ) 
	{
		Cuenta::debito( tarifaPorTransaccion );
	}
	else {
		cout << "fondos insuficientes en la cuenta de cheques";
	}
}