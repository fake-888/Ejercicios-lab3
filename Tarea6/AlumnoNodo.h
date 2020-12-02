#pragma once
#ifndef ALUMNONODO_H
#define ALUMNONODO_H 

class AlumnoNodo 
{
private:

	char* nombreAlumno;
	float notaAlumno;
	AlumnoNodo* siguiente;

public:
	AlumnoNodo(void);
	AlumnoNodo(char*, float, AlumnoNodo*);

	void setNombre(char*);
	char* getNombre();

	void setNota(float);
	float getNota();

	void setSiguiente(AlumnoNodo*);
	AlumnoNodo* getSiguiente();
};

#endif