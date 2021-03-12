#include<iostream>
#include"Movimiento.hpp"
#include"Tablero.hpp"
using namespace std;

#pragma once

class Tableros_Barcos: public Tablero {
	public:
		Tableros_Barcos(vector<vector<char>> celdas);
		virtual void Imprimir();
		bool AtaqueExitoso(Movimiento*);
};