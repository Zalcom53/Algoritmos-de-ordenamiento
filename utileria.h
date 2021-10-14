
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
void mergeSort(int []); // Esta funcion recibe tres arreglos de enteros.
void insertionSort(int []); // Esta funcion recibe tres arreglos de enteros.
void selectionSort(int []); // Esta funcion recibe tres arreglos de enteros.
void generaArregloAleatorio(int c[]);// Esta funcion recibe un arreglo de enteros.
void imprimeArreglo(int []); // Esta funcion se encarga de imprimir los valores del arreglo
//---------------------------------------------------------------------------------


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int userSelection; // Variable que nos servira para
int arrtam = 10; // Esta variable corresponde al tamanio del arreglo
int a[arrtam] = {}; // Arreglo que va a contener los valores a ordenar en el mejor caso
int b[arrtam] = {}; // Arreglo que va a contener los valores a ordenar en el peor caso
int c[arrtam]; // Arreglo que va a contener los valores de forma aleatoria(caso promedio)


void run()


  generaArregloOrdenado(a);
  generaArregloDesordenado(b);
  generaArregloAleatorio(c);

  //MERGESORT
  cout << "Merge-Sort\n" << endl;
  cout << "\nMejor caso - Arreglo ordenado\n" << endl;
  mergeSort(a);
  cout << "\n" << endl
  cout << "Peor caso - Arreglo desordenado\n"<< endl;
  mergeSort(b);
  cout << "\n" << endl
  cout << "Caso promedio - Arreglo ordenado de forma aleatoria" << endl;
  mergeSort(c);
  cout << "\n" << endl

  // INSERTONSORT
  cout << "Insertion-Sort\n" << endl;
  cout << "\nMejor caso - Arreglo ordenado\n" << endl;
  insertionSort(a);
  cout << "\n" << endl
  cout << "Peor caso - Arreglo desordenado\n"<< endl;
  insertionSort(b);
  cout << "\n" << endl
  cout << "Caso promedio - Arreglo ordenado de forma aleatoria" << endl;
  insertionSort(c);
  cout << "\n" << endl

  //SELECTIONSORT
  cout << "Selection-Sort\n" << endl;
  cout << "\nMejor caso - Arreglo ordenado\n" << endl;
  selectionSort(a);
  cout << "\n" << endl
  cout << "Peor caso - Arreglo desordenado\n"<< endl;
  selectionSort(b);
  cout << "\n" << endl
  cout << "Caso promedio - Arreglo ordenado de forma aleatoria" << endl;
  selectionSort(c);
  cout << "\n" << endl






}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
void mergeSort(int []){


}// Llave de cierre en la funcion mergeSort
//---------------------------------------------------------------------------------

void insertionSort(int []){


}// Llave de cierre en insertionSort

//---------------------------------------------------------------------------------
void selectionSort(int []){



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
  }// Llave de cierre en el ciclo for
  cout << "\n------------------------------------------------------------------------\n";


}// LLave de cierre en la funcion imprimeArreglo
//---------------------------------------------------------------------------------

#endif //TAREA_1_UTILERIA_H
