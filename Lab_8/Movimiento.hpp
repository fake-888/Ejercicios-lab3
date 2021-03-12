#include<iostream>
using namespace std;

#pragma once

class Movimiento{
	private:
		int ataque_fila;
		int ataque_col;
	public:
		Movimiento();
		Movimiento(int, int);
		void Imprimir();
};