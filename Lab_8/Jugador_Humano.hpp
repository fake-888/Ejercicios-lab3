#include<vector>
#include<iostream>
#include "Jugador.hpp"
#include "Movimiento.hpp"
using namespace std;

#pragma once

class Jugador_Humano : public Jugador {
	public:
		Jugador_Humano(string);
		virtual void ColocarBarcos(Tableros_Barcos*);
		virtual Movimiento Jugar(Tablero_Ataque*);
};