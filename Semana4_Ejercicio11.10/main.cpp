#include <iostream>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCheques.h"
using namespace std;

int main() {
	
    CuentaAhorros ca( 1000, .5 );
    CuentaCheques cc( 1000, 1.5 );

    cout << "Saldo inicial de la cuenta de ahorros: " << ca.obtenerBalance();
    ca.credito( 50 );
    cout << "\ncredito 50: " << ca.obtenerBalance();
    ca.debito( 100 );
    cout << "\ndebito 100: " << ca.obtenerBalance() << "\nSaldo inicial de la cuenta de ahorros: " << cc.obtenerBalance();
    cc.credito( 50 );
    cout << "\ncredito 50: " << cc.obtenerBalance();
    cc.debito(100);
    cout << "\ndebito 100: " << cc.obtenerBalance() << std::endl;

    return 0;
	
	

}