#include <iostream>
#include <string>
using namespace std;

void resolverCompuertas(string compuerta);
void ordenar(int arreglo[], int inicio, int subIteracion, int menor, int indexMenor);
void printArray(int arreglo[], int n);
double sumatoria(int k, int n);

int main(){
    int opcion = 0;
    do{
        cout << "Menu:\n"
             << "1)Compuertas Logicas Strings\n"
             << "2)Ordenar Arreglo recursivo\n"
             << "3)Sumatoria Recursiva\n"
             << "4)Salir\n"
             << "Ingrese opcion:";
        cin >> opcion;
        if (opcion == 1){
            string cadena = "";
            cout << "Ingrese la cadena: ";
            cin >> cadena;
            resolverCompuertas(cadena);
        }
        if (opcion == 2){
            int arreglo[20];
            srand(time(0));
            for (int i = 0; i < 20; i++){
                arreglo[i] = 1 + rand()%150;
            }    
            cout << "Arreglo Generado:"<<endl;
            printArray(arreglo,20);    
            cout << "----------------------------------------------------------------------"<<endl;
            ordenar(arreglo, 0, 0, 500,0);
        }
        if (opcion == 3){
            int n = 0;
            while(n < 1){
                cout << "Ingrese n:";                
                cin >> n;
            }            
            cout << "-----------------------------------"<<endl;
            cout << "S(" << n << ")" << "=" << sumatoria(n,n) << endl;
            cout << "-----------------------------------"<<endl;
        }
    } while(opcion != 4);
}

void resolverCompuertas(string compuerta){
    int primerBinario = compuerta[0] - '0';
    int indexSegundoB = 3;
    if (compuerta[1] == 'A'){
        indexSegundoB = 4;
    }
    int segundoBinario = compuerta[indexSegundoB] - '0';
    bool solucion = false;
    int indexAcortar = 4;
    if (compuerta[1] == 'A'){
        indexAcortar = 5;
        solucion = (primerBinario && segundoBinario);
    } else {
        solucion = (primerBinario || segundoBinario);
    }
    if (compuerta.length() == 4 || compuerta.length() == 5){
        string salida = "false";
        if (solucion){
            salida = "true";
        }
        cout << "------------------------" << endl;
        cout << "Solucion: "<< salida << endl;
        cout << "------------------------" << endl;        
    } else {       
        string nuevaCompuerta = to_string((int)solucion) + compuerta.substr(indexAcortar);
        resolverCompuertas(nuevaCompuerta);
    }
}

void ordenar(int arreglo[], int inicio, int subIteracion, int menor, int indexMenor){
    if (inicio == 20){        
        cout << "Arreglo Ordenado"<<endl;
    }else{
        if (subIteracion <= 19){
            if (arreglo[subIteracion] < menor){
                ordenar(arreglo, inicio, subIteracion + 1, arreglo[subIteracion], subIteracion);
            } else {
                ordenar(arreglo, inicio, subIteracion + 1, menor, indexMenor);
            }
            
        }
        if (inicio <= 19 && subIteracion == 20){
            int temp = arreglo[inicio];
            arreglo[inicio] = menor;
            arreglo[indexMenor] = temp;
            cout << "Iteracion "<< inicio + 1 << endl;            
            printArray(arreglo,20);
            cout << "----------------------------------------------------------------------"<<endl;
            ordenar(arreglo, inicio + 1, inicio + 1, 500,0);
        }
    }
}

void printArray(int arreglo[], int n){    
    cout << "[ "; 
    for (int i = 0; i < n; i++){
        cout << arreglo[i] << " ";
    }
    cout << "]"<<endl;
}

double sumatoria(int k, int n){
    if (k == 1){
        return 0.5;
    } else {
        return ((double)(2*k - 1))/((double)(k*(k+1))) + sumatoria(k-1,n);
    }
}
