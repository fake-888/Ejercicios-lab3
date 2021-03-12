#include<vector>
#include<iostream>
#include"Tablero_Ataque.hpp"
#include"Tableros_Barcos.hpp"
using namespace std;

#pragma once

class Jugador {
	protected:
		string nombre;
	public:
		Jugador(string) ;
		virtual Movimiento Jugar(Tablero_Ataque*) = 0;
		virtual void ColocarBarcos(Tableros_Barcos*) = 0;
};