
/*
  Nombre: utileria.h
  Fecha: septiembre del 2021
  Autor: Daniel Antonio Quihuis Hernandez
  Descripcion: Este archivo contiene el codigo fuente del programa
*/

#ifndef TAREA_1_UTILERIA_H
#define TAREA_1_UTILERIA_H

//---------------------------------------------------------------------------------
//BLOQUE PARA DECLARAR FUNCIONES
void run(); // Esta funcion no recibe parametros, se encarga de ejecutar el codfigo.
float mergeSort(int [], float); // Esta funcion recibe tres arreglos de enteros.
float insertionSort(int [], float); // Esta funcion recibe tres arreglos de enteros.
float selectionSort(int [], float); // Esta funcion recibe tres arreglos de enteros.
void generaArregloAleatorio(int []);// Esta funcion recibe un arreglo de enteros.
void imprimeArreglo(int []); // Esta funcion se encarga de imprimir los valores del arreglo
//---------------------------------------------------------------------------------


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//DATOS DE USO GLOBAL
int userSelection; // Variable que nos servira para
int arrtam = 10; // Esta variable corresponde al tamanio del arreglo
int a[arrtam] = {1,2,4,5,6,7,8,9,10}; // Arreglo que va a contener los valores a ordenar en el mejor caso(los valores estan ordenados)
int b[arrtam] = {10,9,8,7,6,5,4,3,2,1}; // Arreglo que va a contener los valores a ordenar en el peor caso(orden descendente)
int c[arrtam]; // Arreglo que va a contener los valores de forma aleatoria(caso promedio)
float tiempo = 0.0; // Variable que se utiliza para medir el tiempo de ejecucion


void run(){

  generaArregloAleatorio(c);

  //MERGESORT
  cout << "Mergesort\n" << endl;
  cout << "\nMejor caso - Arreglo ordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(a);
  mergeSort(a, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(a);
  cout << "Tiempo de ejecucion para el mejor caso" << tiempo << endl;
  cout << "\n" << endl

  cout << "Peor caso - Arreglo desordenado\n"<< endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(b);
  mergeSort(b, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(b);
  cout << "Tiempo de ejecucion para el peor caso" << tiempo <<endl;
  cout << "\n" << endl

  cout << "Caso promedio - Arreglo ordenado de forma aleatoria" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(c);
  mergeSort(c, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(c);
  cout << "Tiempo de ejecucion para el caso promedio" << tiempo << endl;
  cout << "\n" << endl

  // INSERTONSORT
  cout << "Insertionsort\n" << endl;
  cout << "\nMejor caso - Arreglo ordenado\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(a);
  insertionSort(a, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(a);
  cout << "Tiempo de ejecucion para el mejor caso" << tiempo << endl;
  cout << "\n" << endl

  cout << "Peor caso - Arreglo desordenado\n"<< endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(b);
  insertionSort(b, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(b);
  cout << "Tiempo de ejecucion para el peor caso" << tiempo <<endl;
  cout << "\n" << endl

  cout << "Caso promedio - Arreglo ordenado de forma aleatoria" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(c);
  insertionSort(c, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(c);
  cout << "Tiempo de ejecucion para el caso promedio" << tiempo << endl;
  cout << "\n" << endl

  //SELECTIONSORT
  cout << "Selectionsort\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(a);
  selectionSort(a, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(a);
  cout << "Tiempo de ejecucion para el mejor caso" << tiempo << endl;
  cout << "\n" << endl

  cout << "Peor caso - Arreglo desordenado\n"<< endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(b);
  selectionSort(b, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(b);
  cout << "Tiempo de ejecucion para el peor caso" << tiempo <<endl;
  cout << "\n" << endl

  cout << "Caso promedio - Arreglo ordenado de forma aleatoria" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(c);
  selectionSort(c, tiempo);
  cout << "Arreglo despues de ordenar" << endl;
  imprimeArreglo(c);
  cout << "Tiempo de ejecucion para el caso promedio" << tiempo << endl;
  cout << "\n" << endl


}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
float mergeSort(int [], tiempo){


return tiempo;

}// Llave de cierre en la funcion mergeSort
//---------------------------------------------------------------------------------

float insertionSort(int [], tiempo){

return tiempo;
}// Llave de cierre en insertionSort

//---------------------------------------------------------------------------------
float selectionSort(int [], tiempo){


return tiempo;

}// Llave de cierre en la funcion selectionSort
//---------------------------------------------------------------------------------
void generaArregloAleatorio(int c[]){

cout << "Generando arreglo de forma aleatoria, espere un momento..." << endl;

for (int i = 0; i < arrtam -1 ; i++) {
  a[i] = 1 + rand() % 100;
}// Llave de cierre en el ciclo for

cout << "Se genero el arreglo de forma aleatoria con exito.\n" << endl;


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
void imprimeArreglo(int a[]){

  cout << "Imprimiendo arreglo espere un momento...\n" << endl;


  for (int i = 0; i < arrtam -1; i++) {

    cout << a[i] << " ";
    cout << endl;
  }// Llave de cierre en el ciclo for
  cout << "\n------------------------------------------------------------------------\n";


}// LLave de cierre en la funcion imprimeArreglo
//---------------------------------------------------------------------------------

#endif //TAREA_1_UTILERIA_H
