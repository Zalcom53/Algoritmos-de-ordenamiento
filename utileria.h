
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
#define MIN 1
#define MAX 10
int a[10] = {1,2,4,5,6,7,8,9,10}; // Arreglo que va a contener los valores a ordenar en el mejor caso(los valores estan ordenados)
int b[10] = {10,9,8,7,6,5,4,3,2,1}; // Arreglo que va a contener los valores a ordenar en el peor caso(orden descendente)
int c[10]; // Arreglo que va a contener los valores de forma aleatoria(caso promedio)
float tiempo = 0.0; // Esta variable es para medir el timepo



void run(){
  srand(time(0));

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

  generaArregloAleatorio(c);

  cout << "Caso promedio - Arreglo ordenado de forma aleatoria\n" << endl;
  cout << "Arreglo antes de ordenar" << endl;
  imprimeArreglo(c);
  mergeSort(c, tiempo);
  cout << "\nArreglo despues de ordenar" << endl;
  imprimeArreglo(c);
  cout << "\nTiempo de ejecucion para el caso promedio " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  cout << "\n" << endl;

  // INSERTONSORT
  // cout << "--------------------------------------------------------------------\n" << endl;
  // cout << "Insertionsort\n" << endl;
  // cout << "Mejor caso - Arreglo ordenado\n" << endl;
  // cout << "Arreglo antes de ordenar" << endl;
  // imprimeArreglo(a);
  // insertionSort(a, tiempo);
  // cout << "\nArreglo despues de ordenar" << endl;
  // imprimeArreglo(a);
  // cout << "\nTiempo de ejecucion para el mejor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  // cout << "\n" << endl;
  //
  // cout << "Peor caso - Arreglo desordenado\n" << endl;
  // cout << "Arreglo antes de ordenar" << endl;
  // imprimeArreglo(b);
  // insertionSort(b, tiempo);
  // cout << "\nArreglo despues de ordenar" << endl;
  // imprimeArreglo(b);
  // cout << "\nTiempo de ejecucion para el peor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  // cout << "\n" << endl;
  //
  // cout << "Caso promedio - Arreglo ordenado de forma aleatoria\n" << endl;
  // cout << "Arreglo antes de ordenar" << endl;
  // imprimeArreglo(c);
  // insertionSort(c, tiempo);
  // cout << "\nArreglo despues de ordenar" << endl;
  // imprimeArreglo(c);
  // cout << "\nTiempo de ejecucion para el caso promedio " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  // cout << "\n" << endl;
  //
  //
  // //SELECTIONSORT
  // cout << "--------------------------------------------------------------------\n" << endl;
  // cout << "Selectionsort\n" << endl;
  // cout << "Mejor caso - Arreglo ordenado\n" << endl;
  // cout << "Arreglo antes de ordenar" << endl;
  // imprimeArreglo(a);
  // selectionSort(a, tiempo);
  // cout << "\nArreglo despues de ordenar" << endl;
  // imprimeArreglo(a);
  // cout << "\nTiempo de ejecucion para el mejor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  // cout << "\n" << endl;
  //
  // cout << "Peor caso - Arreglo desordenado\n" << endl;
  // cout << "Arreglo antes de ordenar" << endl;
  // imprimeArreglo(b);
  // selectionSort(b, tiempo);
  // cout << "\nArreglo despues de ordenar" << endl;
  // imprimeArreglo(b);
  // cout << "\nTiempo de ejecucion para el peor caso " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  // cout << "\n" << endl;
  //
  // cout << "Caso promedio - Arreglo ordenado de forma aleatoria\n" << endl;
  // cout << "Arreglo antes de ordenar" << endl;
  // imprimeArreglo(c);
  // selectionSort(c, tiempo);
  // cout << "\nArreglo despues de ordenar" << endl;
  // imprimeArreglo(c);
  // cout << "\nTiempo de ejecucion para el caso promedio " << float(tiempo)/CLOCKS_PER_SEC << " segundos."<< endl;
  // cout << "\n" << endl;
  //


}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
float mergeSort(int [], float){

clock_t t; // inicar el contador
t = clock();

t = clock()-t; // Para detener el contador
tiempo = t;
return tiempo;

}// Llave de cierre en la funcion mergeSort
//---------------------------------------------------------------------------------

float insertionSort(int [], float){

clock_t t; // inicar el contador
t = clock();

t = clock()-t; // Para detener el contador
tiempo = t;
return tiempo;
}// Llave de cierre en insertionSort

//---------------------------------------------------------------------------------
float selectionSort(int [], float){

clock_t t; // inicar el contador
t = clock();

t = clock()-t; // Para detener el contador
tiempo = t;
return tiempo;

}// Llave de cierre en la funcion selectionSort
//---------------------------------------------------------------------------------
void generaArregloAleatorio(int []){

cout << "\n\nGenerando arreglo de forma aleatoria, espere un momento...\n" << endl;
for (int i = 0; i < 10 -1 ; i++) {

  a[i] = MIN+rand()%(MAX-MIN+1);

}// Llave de cierre en el ciclo for


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
void imprimeArreglo(int []){

  for (int i = 0; i < 10 ; i++) {
    
    cout << a[i] << " ";

  }// Llave de cierre en el ciclo for


}// LLave de cierre en la funcion imprimeArreglo
//---------------------------------------------------------------------------------

#endif //TAREA_1_UTILERIA_H
