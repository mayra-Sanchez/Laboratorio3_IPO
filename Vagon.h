/*
  Archivo: Vagon.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-28
	Versión: 0.1
  Licencia: GNU-GPL
*/

#ifndef VAGON_H
#define VAGON_H

#include<string>
using namespace std;

/*
  CLASE: Vagon
	
  INTENCIÓN: Modela un vagon con un numero que indica que vagon es y si contiene enfermos (true) o no (false)

  RELACIONES: Ninguna
*/

class Vagon 
{
	private:

  int numero;
  bool enfermos;

	public:
  /**
    Constructor
  */
  Vagon(int Numero, bool enfermos);
  /**
    Destructor.
  */
  ~Vagon();
  /**
    Nos dice el número del vagon.
  */
  virtual int elNumeroDelVagon();
};

#else
class Vagon; /* Declaración adelantada*/
#endif