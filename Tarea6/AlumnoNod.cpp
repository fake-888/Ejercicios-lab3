#include "AlumnoNodo.h"

AlumnoNodo::AlumnoNodo(void) : nombreAlumno(), notaAlumno(-1), siguiente(nullptr)
{
}

AlumnoNodo::AlumnoNodo(char* _nombre, float _nota, AlumnoNodo* _siguiente) 
{
	setNombre(_nombre);
	setNota(_nota);
	setSiguiente(_siguiente);
}

void AlumnoNodo::setNombre(char* _nombre) 
{
	this->nombreAlumno = _nombre;
}

void AlumnoNodo::setNota(float _nota) 
{
	this->notaAlumno = _nota;
}

void AlumnoNodo::setSiguiente(AlumnoNodo* _siguiente) 
{
	this->siguiente = _siguiente;
}

char* AlumnoNodo::getNombre() 
{
	return nombreAlumno;
}

float AlumnoNodo::getNota() 
{
	return notaAlumno;
}

AlumnoNodo* AlumnoNodo::getSiguiente() 
{
	return siguiente;
}