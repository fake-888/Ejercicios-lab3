/*Actividad 2 de la clase Cuenta, ejercicio 3.12*/
#include <iostream>
using namespace std;

class Cuenta
{
public: 
	
	double saldoCuenta;

 Cuenta ( double _saldoInciial )
	{
		if (_saldoInciial > 0.0) 
		{
			saldoCuenta = _saldoInciial;
		}
	}

	void abonar ( double _monto )
	{
		saldoCuenta += _monto;
	}

	void cargar(double _monto) 
	{
		if ( _monto > saldoCuenta )
		{
			cout << "El monto a cargar excede el saldo de la cuenta" << endl; 
		}
		else 
		{
			saldoCuenta -= _monto;
		}
	}

	double obtenerSaldo ()
	{
		return saldoCuenta;
	}
};

int main() {
	 
	Cuenta usuarioCuenta1( 50.00 );
	Cuenta usuarioCuenta2( 25.00 );

	cout << "Saldo de la cuenta 1: " << usuarioCuenta1.obtenerSaldo() << "\n";
	cout << "Saldo de la cuenta 2: " << usuarioCuenta2.obtenerSaldo() << "\n";
	
	double montoDeposito;

	cout << "Escriba el monto para depositar a la cuenta 1: " << "\n";
	cin >> montoDeposito;
	
	cout << "\nsumando al saldo de cuenta1\n\n" << montoDeposito << "\n";
	usuarioCuenta1.abonar(montoDeposito);

	cout << "Saldo de la cuenta 1: " << usuarioCuenta1.obtenerSaldo() << "\n";
	cout << "Saldo de la cuenta 2: " << usuarioCuenta2.obtenerSaldo() << "\n";


	cout << "Escriba el monto para depositar a la cuenta 2: " << "\n";
	cin >> montoDeposito;

	cout << "\nsumando al saldo de cuenta1\n\n" << montoDeposito << "\n";
	usuarioCuenta2.abonar(montoDeposito);

	cout << "Saldo de la cuenta 1: " << usuarioCuenta1.obtenerSaldo() << "\n";
	cout << "Saldo de la cuenta 2: " << usuarioCuenta2.obtenerSaldo() << "\n";
	
	double montoCargo;

	cout << "Escriba el monto a cargar para cuenta1: " << "\n";
	cin >> montoCargo;

	cout << "\nrestando al saldo de cuenta1\n\n" << montoCargo;
	usuarioCuenta1.cargar(montoCargo);

	cout << "Saldo de la cuenta 1: " << usuarioCuenta1.obtenerSaldo() << "\n";
	cout << "Saldo de la cuenta 2: " << usuarioCuenta2.obtenerSaldo() << "\n";

	cout << "Escriba el monto a cargar para cuenta2: " << "\n";
	cin >> montoCargo;

	cout << "\nrestando al saldo de cuenta2\n\n" << montoCargo;
	usuarioCuenta2.cargar(montoCargo);

	cout << "Saldo de la cuenta 1: " << usuarioCuenta1.obtenerSaldo() << "\n";
	cout << "Saldo de la cuenta 2: " << usuarioCuenta2.obtenerSaldo() << "\n";




}
