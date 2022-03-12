/*
  Nombre: utileria.cpp
  Fecha: Marzo del 2022
  Autor: Daniel Antonio Qui
  Descripcion: Este archivo contiene la implementacion de utileria.h
*/

#include "utileria.h"

//---------------------------------------------------------------------------------
//BLOQUE PARA DECLARAR FUNCIONES
void run(); // Esta funcion se encarga de ejecutar todo el codigo
//---------------------------------------------------------------------------------


void run(){

  int nTAM, tipo_arreglo, tipo_algoritmo;
  int arreglo[nTAM];
  nTAM = CapturaSegura("Ingrese el valor de n:");
  defineSecuencia(n, tipo_arreglo, tipo_algoritmo);

  switch (tipo_arreglo) {
    case 1:
    generaArregloOrdenado(int arreglo[], int nTAM);
    break;

    case 2:
    generaArregloAleatorio(int arreglo[], int nTAM);
    break;

    case 3:
    gemeraArregloDesordenado(int arreglo[], int nTAM);
    break;
  }

  switch (tipo_algoritmo) {
    case 1:
    mergeSort(int arreglo[]);
    break

    case 2:
    insertionSort(int arreglo[]);
    break;

    case 3:
    selectionSort(int arreglo[]);
    break;
  }
}// Llave de cierre en la funcion run
