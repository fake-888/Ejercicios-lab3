#include<iostream>
#include"Tablero.hpp"
#include "Movimiento.hpp"

using namespace std;

#pragma once

class Tablero_Ataque: public Tablero {
	public:
		Tablero_Ataque(vector<vector<char>>) ;
		virtual void Imprimir();
		bool ValidarMovimiento(Movimiento*);
		void AplicarMovimiento(Movimiento*);
		bool VerificarVictoria();
};
 