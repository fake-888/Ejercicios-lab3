#include <iostream>
using namespace std;
#include <math.h>



int main(int argc, char** argv) 
 {
	int opcion = 0;
    do{        
        cout << "1. Ejemplo1 " << endl;
        cout << "2. Ejemplo2 " << endl;
        cout << "3. SALIR " << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
        		if (opcion == 1)
				{
        			cout << "Ingrese n:";
					int n = 0;
					int acum = 0;
					cin >> n;
					for(int i = 0; i <=n; i++)
					{
						acum+= i*pow(i+1,2);
					}	
					cout << acum << endl;
				}
                break;
                
			case 2:
				if (opcion ==2)
				{
					int x = 0;
					cout << "Ingrese x:";
					cin >> x;
					cout << x;
					double y = 1/(1 + exp(x));
					cout << "El total es: " << y << endl;
				} 
                break;
        
        }        
    } while (opcion != 3);                
    return 0;
}
