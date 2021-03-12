#include<vector>
#include<iostream>
#include "Tableros_Barcos.hpp"
#include "Tablero_Ataque.hpp"
#include "Jugador.hpp"
using namespace std;

#pragma once

class Juego {
	private:
		Tableros_Barcos** tablerosBarcos;
		Tablero_Ataque** tablerosAtaque;
		Jugador** jugadores;
	public:
		Juego();
		Juego(Tableros_Barcos**,Tablero_Ataque**,Jugador**) ;
		~Juego();
		void PrepararJuego();
		void Jugar();
};
