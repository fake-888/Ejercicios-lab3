#include "SeccionLista.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {

	SeccionLista addl;
	addl.agregarAlumno( ( char* ) "Luis", 85 );
	addl.agregarAlumno( ( char* ) "Elio", 59 );
	addl.agregarAlumno( ( char* ) "Jose", 71 );

	addl.listarSeccion();

	cout << "Monto de aprobados: " << addl.cantidadAprobados() << endl;

}
