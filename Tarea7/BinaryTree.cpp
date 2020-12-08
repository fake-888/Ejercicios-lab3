#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
//Esta estructura va tener tres elementos 
struct estructuraNodo
{
	int valor;//El valor que va arrojar el nodo
	struct estructuraNodo *izq;
	struct estructuraNodo *der;
};

//Se va definir con un tipo de alias a esta estructura
typedef struct estructuraNodo *nodo;

void insertar(int valorInsertar, nodo &raiz)
{

}
int main()
{
	//Creacion del arbol binario 
	nodo arbol = NULL;
	insertar(35, arbol);
	
	_getch();
}