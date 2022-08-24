/*
  Archivo: Via.cpp
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-28
	Versión: 0.1
  Licencia: GNU-GPL
*/

#include "Via.h"
#include "Vagon.h"


Via::Via()
{
  //No hace nada
}

/**
  Ya que el programa tenia memory leak, se hace esto para devolver la memoria ocupada.

	Si desea comprobar que el codigo no tiene errores solo debe ingresar esto en la consola:
	
	valgrind --tool=memcheck --leak-check=full ./main
*/
Via::~ Via()
{
  for(int cual = 0; cual < vagones.size(); cual++)
  {
    delete vagones[cual];
    vagones[cual] = nullptr;
  }
}

/**
  Introduce los vagones
*/
void Via::introducirVagon(Vagon *vagon)
{
  vagones.push_back(vagon); //push_back() para introducir un vagón en la vía
}

/**
  Deja los vagones en su correspondiente orden
*/
void Via::retrocederPor(Via &otraVia)
{
  otraVia.vagones.push_back(vagones.back()); //push_back() para introducir un vagón en la vía y back() para averiguar el último vagón de la vía
  this -> vagones.pop_back(); //pop_back() para que elimine el último vagón de la vía.
}

void Via::avanzarDesde(Via &otraVia)
{
	//Como hay un problema en el main.cpp se debe solucionar con esto y es que como en el proceso de dejar vagones hay una parte en la que no queda ningun vagon por recoger entonces lo que se hace es que si esta vacio entonces no haga nada y se lo salte
  if(otraVia.vagones.empty())
  {
    //No hace nada
  } 
  else 
  {
		//Agrega los vagones en su correspondiente orden
    this -> vagones.push_back(otraVia.vagones.back());//push_back() para introducir un vagón en la vía y back() para averiguar el último vagón de la vía
    otraVia.vagones.pop_back();//pop_back() para que elimine el último vagón de la vía.
  }
}
/**
  Da el estado actual de los vagones, tanto al inicio como al final
*/
string Via::estadoActual()
{
  string resultado;
  for(int cualVagon = 0; cualVagon < vagones.size(); cualVagon++)
  {
    resultado += to_string(vagones[cualVagon]->elNumeroDelVagon());
    resultado += " ";
  }
  return resultado;
}