#include<iostream>
#include<vector>

using namespace std;

#pragma once

class Tablero {
	protected:
		vector<vector<char>> celdas;
	public:
		Tablero();
		Tablero(vector<vector<char>>) ;
		virtual void Imprimir() = 0;
};
