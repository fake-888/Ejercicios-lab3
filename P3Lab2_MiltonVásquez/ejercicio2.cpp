#include <iostream>
#include <time.h>
#include <string>
#include <random>

using namespace std;

void sumatoria_recu(int num, int i, double z) {
	if (num>=i) {
		double parte_arriba = 0;
		double parte_abajo = 0;
		double div = 0;

		parte_arriba = (2 * i) - 1;
		parte_abajo = i * (i + 1);
		div = (parte_arriba) / (parte_abajo);
		z = z + div;
		i++;
		sumatoria_recu(num, i, z);
	} else if (i >= num) {
		cout << " Resp//  " << z << '\n';
	}
}

void orden_arre(int arr[], bool band, int tam) {

	if (band ==true) {
		int aus = 0;
		band = false;
		for (int j = 0; j < tam - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				aus = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aus;
				band = true;
			}
		}
		orden_arre(arr, band, tam);
	} else {
		for (int i = 0; i < tam; i++) {
			cout << "{" << arr[i] << "}";
		}
	}
}

int main() {
	cout<<'\n';
	srand(time(NULL));

	int opc = 1;

	while (opc != 4) {
		cout << "*******************BIENVENIDO**********************" << endl;
		cout << "1. Ejercicio 1 Tabla" << endl;
		cout << "2. Ejercicio 2 Ordenar Recursivo" << endl;
		cout << "3. Ejercicio 3 Sumatoria Recursivo" << endl;
		cout << "4. salir" << endl;
		cout << "Ingrese la opcion que desea: " << endl;
		cin >> opc;
		switch (opc) {
			case 2: {

				int ar[20];
				cout << "Desorde= ";
				for (int i = 0; i < 20; i++) {
					ar[i] = 1 + (rand() % 90);
					cout << "[" << ar[i] << "]";
				}

				cout << '\n';

				cout << "Orden=";
				orden_arre(ar, true, 20);
			}
			break;

			case 3: {

				int uno = 0;
				int dos = 1;
				double resp = 0;

				cout << "ponga el valor de x:";
				cin >> uno;
				while (uno <= 0) {
					cout << "Ingrese un valor mayor que 0:";
					cin >> uno;
				}
				sumatoria_recu(uno, dos, resp);
			}

			break;

			case 1: {

				cout << "Escriba la cadena: ";
				string cadena;

				cin >> cadena;
				int res = 0;
				int tam;
				tam = cadena.length();

				for (int i = 0; i < tam; i++) {
					if (cadena[i] == 'A' && i == 1) {
						res = 0;
						if (cadena[i - 1] == '0' && cadena[i + 3] == '1') {
							res = 0;
						} else {
							res = 1;
						}
						if (cadena[i - 1] == '0' && cadena[i + 3] == '0') {
							res = 0;
						} else {
							res = 1;
						}
						if (cadena[i - 1] == '1' && cadena[i + 3] == '0') {
							res = 0;
						}

						else {
							res = 1;
						}
					} else if (cadena[i] == 'O' && i == 1) {
						if (res == '0' && cadena[i + 2] == '0') {
							res = 0;
						} else {
							res = 1;
						}
					} else if (cadena[i] == 'A') {

						if (res == 1 && cadena[i + 3] == '0') {
							res = 0;
						} else {
							res = 1;
						}

						if (res == 0 && cadena[i + 3] == '1') {
							res = 0;
						} else {
							res = 1;
						}

						if (res == 0 && cadena[i + 3] == '0') {
							res = 0;
						} else {
							res = 1;
						}
						if (cadena[i] == 'O') {
							if (res == 0 && cadena[i + 2] == '0') {
								res = 0;
							} else {
								res = 1;
							}
						}
					}
				}
				if (res == 0) {
					cout << "FALSO" << endl;
				} else {
					cout << "VERDADERO" << endl;
				}

				break;
			}
		}
	}
	return 0;
}
