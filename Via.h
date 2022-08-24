/*
  Archivo: Via.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-28
	Versión: 0.1
  Licencia: GNU-GPL
*/

/*
  CLASE: Via
	
  INTENCIÓN: Modela todas las acciones que tienen los vagones en la via, tales como intruducir vagones, pasar un vagon al ramalIzquierdo o el ramalDerecho y al final verificar su estado actual

  RELACIONES: Conoce vagon
*/

#ifndef VIA_H
#define VIA_H

#include "Vagon.h"
#include<string>
#include<vector>
using namespace std;

class Via 
{
	private:

	vector <Vagon *> vagones;

	public:
  /**
    Constructor.
  */
  Via();
  /**
    Destructor.
  */
  ~Via();
  virtual void introducirVagon(Vagon *vagon);

  virtual void retrocederPor(Via &otraVia);

  virtual void avanzarDesde(Via &otraVia);

  virtual string estadoActual();
};

#else
class Via; /* Declaración adelantada*/
#endif 