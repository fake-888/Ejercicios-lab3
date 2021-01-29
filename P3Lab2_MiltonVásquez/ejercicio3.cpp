#include <iostream>
using namespace std;
#include <math.h>

int main() {

	cout << "Ingrese n:";
	int n = 0;
	int acum = 0;
	cin >> n;
	for(int i = 0; i <=n; i++) {
		double acum= i - 1/(i(i+1));
	}
	cout << acum << endl;
}
