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
  defineSecuencia(n, tipo_arreglo, tipo_algoritmo);

  srand(time(0));
  generaArregloAleatorio(c);



  switch (tipo_arreglo) {
    case 1:
    generaArregloOrdenado(int arreglo[]);
    break;

    case 2:
    generaArregloAleatorio(int arreglo[]);
    break;

    case 3:
    gemeraArregloDesordenado(int arreglo[]);
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

  //MERGESORT
  cout << "Mergesort\n" << endl;
  cout << "Mejor caso - Arreglo ordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(a);
  mergeSort(a, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(a);
  cout << "\nTiempo de ejecucion para el mejor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  cout << "Peor caso - Arreglo desordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(b);
  mergeSort(b, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(b);
  cout << "\nTiempo de ejecucion para el peor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  cout << "Caso promedio - Arreglo ordenado de forma aleatoria\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(c);
  mergeSort(c, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(c);
  cout << "\nTiempo de ejecucion para el caso promedio " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  // INSERTONSORT
  cout << "--------------------------------------------------------------------\n" << endl;
  cout << "Insertionsort\n" << endl;
  cout << "Mejor caso - Arreglo ordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(a);
  insertionSort(a, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(a);
  cout << "\nTiempo de ejecucion para el mejor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  cout << "Peor caso - Arreglo desordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(b);
  insertionSort(b, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(b);
  cout << "\nTiempo de ejecucion para el peor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  cout << "Caso promedio - Arreglo ordenado de forma aleatoria\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(c);
  insertionSort(c, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(c);
  cout << "\nTiempo de ejecucion para el caso promedio " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;


  //SELECTIONSORT
  cout << "--------------------------------------------------------------------\n" << endl;
  cout << "Selectionsort\n" << endl;
  cout << "Mejor caso - Arreglo ordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(a);
  selectionSort(a, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(a);
  cout << "\nTiempo de ejecucion para el mejor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  cout << "Peor caso - Arreglo desordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(b);
  selectionSort(b, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(b);
  cout << "\nTiempo de ejecucion para el peor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  cout << "Caso promedio - Arreglo ordenado de forma aleatoria\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(c);
  selectionSort(c, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(c);
  cout << "\nTiempo de ejecucion para el caso promedio " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;


}// Llave de cierre en la funcion run
