/*
  Archivo: Vagon.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-28
	Versión: 0.1
  Licencia: GNU-GPL
*/

#include "Vagon.h"

Vagon::Vagon(int Numero, bool enfermos)
{
  this -> numero = Numero;
  this -> enfermos = enfermos;
}

Vagon::~Vagon()
{
  //No hace nada
}

int Vagon::elNumeroDelVagon()
{
  return this->numero;
}