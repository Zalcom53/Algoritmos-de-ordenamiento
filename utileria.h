
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
void mergeSort(int a[], int b[], int c[]); // Esta funcion recibe tres arreglos de enteros.
void insertionSort(int a[], int b[], int c[]); // Esta funcion recibe tres arreglos de enteros.
void selectionSort(int a[], int b[], int c[]); // Esta funcion recibe tres arreglos de enteros.
void generaArregloOrdenado(int a[]); // Esta funcion recibe un arreglo de enteros.
void generaArregloDesordenado(int b[]); // Esta funcion recibe un arreglo de enteros.
void generaArregloAleatorio(int c[]);// Esta funcion recibe un arreglo de enteros.
void imprimeArreglo(int []); // Esta funcion se encarga de imprimir los valores del arreglo
//---------------------------------------------------------------------------------


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ARRTAM 10 // Tamaño maximo de elementos en el vector

int userSelection; // Variable que nos servira para
int a[ARRTAM]; // Arreglo que va a contener los valores a ordenar en el mejor caso
int b[ARRTAM]; // Arreglo que va a contener los valores a ordenar en el peor caso
int c[ARRTAM]; // Arreglo que va a contener los valores de forma aleatoria(caso promedio)


void run()


  generaArregloOrdenado(a);
  generaArregloDesordenado(b);
  generaArregloAleatorio(c);



}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
void mergeSort(int a[], int b[], int c[]){

  cout << "Merge-Sort\n" << endl;



}// Llave de cierre en la funcion mergeSort
//---------------------------------------------------------------------------------

void insertionSort(int a[], int b[], int c[]){

  cout << "Insertion-Sort\n" << endl;



}// Llave de cierre en insertionSort

//---------------------------------------------------------------------------------
void selectionSort(int a[], int b[], int c[]){

  cout << "Selection-Sort\n" << endl;



}// Llave de cierre en la funcion selectionSort

//---------------------------------------------------------------------------------
void generaArregloOrdenado(int a[]){

cout << "Generando arreglo ordenado espere un momento..." << endl;


for (int i = 0; i < ARRTAM -1 ; i++) {
    a[i] = ARRTAM + 1;
}// Llave de cierre en el ciclo for
cout << "Se genero el arreglo ordenado de forma exitosa.\n" << endl;


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
void generaArregloDesordenado(int b[]){

cout << "Generando arreglo desordenado, espere un momento..." << endl;


for (int i = 0; i < ARRTAM -1 ; i++) {
  a[i] = 1 + rand() % 100 - 3;
}// Llave de cierre en el ciclo for

cout << "Se genero el arreglo desordenado de forma exitosa.\n" << endl;


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
void generaArregloAleatorio(int c[]){

cout << "Generando arreglo de forma aleatoria, espere un momento..." << endl;

for (int i = 0; i < ARRTAM -1 ; i++) {
  a[i] = 1 + rand() % 100;
}// Llave de cierre en el ciclo for

cout << "Se genero el arreglo de forma aleatoria con exito.\n" << endl;


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
void imprimeArreglo(int a[]){

  cout << "Imprimiendo arreglo espere un momento...\n" << endl;


  for (int i = 0; i < ARRTAM -1; i++) {

    cout << a[i] << " ";
  }// Llave de cierre en el ciclo for
  cout << "\n------------------------------------------------------------------------\n";


}// LLave de cierre en la funcion imprimeArreglo
//---------------------------------------------------------------------------------

#endif //TAREA_1_UTILERIA_H
