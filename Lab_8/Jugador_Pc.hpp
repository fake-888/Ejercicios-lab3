#include<vector>
#include<iostream>
#include "Jugador.hpp"
#include "Movimiento.hpp"

#pragma once

using namespace std;
class Jugador_Pc : public Jugador {
	public:
		Jugador_Pc(string);
		virtual void ColocarBarcos(Tableros_Barcos*);
		virtual Movimiento Jugar(Tablero_Ataque*);
};
