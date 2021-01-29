#include <iostream>
using namespace std;

int bajoI(int a[], int i, int j) {
	if (i == j)
		return i;

	int k = bajoI(a, i + 1, j);

	return (a[i] < a[k])? i : k;
}

void recurDeA(int a[], int n, int index = 0) {
	if (index == n)
		return;
	int k = bajoI(a, index, n-1);
	
	if (k != index)
		swap(a[k], a[index]);

	recurDeA(a, n, index + 1);
}

int main() {
	int arreglo[] = {12,15,45,1,2,5,9,99,88,77,76,55,52,39,41,28,30,42,17};//arreglo de 20 elementos
	int n = sizeof(arreglo)/sizeof(arreglo[0]);
	
	recurDeA(arreglo, n);
	
	for (int i = 0; i<n ; i++)
		cout << arreglo[i] << " ";
	cout << endl;
	return 0;
}
