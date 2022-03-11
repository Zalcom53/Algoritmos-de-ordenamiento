
/*
  Nombre: utileria.h
  Fecha: Marzo del 2022
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
void generaArregloAleatorio(int []);// Esta funcion recibe un arreglo de enteros y los ordena de forma aleatoria
void generaArregloOrdenado(); // Esta funcion recibe un arreglo de enteros y los ordena de forma odenada
void generaArregloDesordenado(); // Esta funcion recibe un arreglo de enteros y los ordena de forma desodenada
void imprimeArreglo(int []); // Esta funcion se encarga de imprimir los valores del arreglo
int CapturaSegura(const char solicitud[]); // Esta funcion captura un numero entero de forma segura
int defineSecuencia(); // Esta funcion toma los valores para la secuencia de ejecucion
//---------------------------------------------------------------------------------


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//DATOS DE USO GLOBAL

//---------------------------------------------------------------------------------
float mergeSort(int [], float){


clock_t t; // inicar el contador
t = clock();

t = clock()-t; // Para detener el contador
tiempo = t;
return tiempo;

}// Llave de cierre en la funcion mergeSort
//---------------------------------------------------------------------------------

float insertionSort(int [], int){
int pos, aux;
clock_t t; // inicar el contador
t = clock();

for (int i = 0; i < n; i++) {

pos = i;
aux = a[i];
while ((pos > 0) && a[pos-1] > aux) {
  lugar--;
      } // LLave de cierre en el ciclo while
    a[pos] = aux;
   } //LLave de cierre en el ciclo for

t = clock()-t; // Para detener el contador
tiempo = t;
return tiempo;
}// Llave de cierre en insertionSort

//---------------------------------------------------------------------------------
float selectionSort(int [], float){

int min, aux;
clock_t t; // inicar el contador
t = clock();

for (int i = 0; i < n; i++) {
  min = i;
  for (int j = i+1; j < n; j++) {
    if (a[j] < a[min]) {
      min = j;
    }// LLave de cierre en if  dentro de for con j
  }// Llave de cierre para for para j
  aux = a[i];
  a[i] = a[min];
  a[min] = aux;
} // Llave de cierre para for con i

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

cout << "Arreglo generado con exito." << endl;

}// Llave de cierre en la funcion generaArregloAleatorio
//---------------------------------------------------------------------------------
void generaArregloOrdenado(){

cout << "\nGenerando arreglo de forma ordenada, espere un momento...\n" << endl;

cout << "Arreglo generado con exito" << endl;
}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
void generaArregloDesordenado(){

cout << "\nGenerando arreglo de forma desordenada, espere un momento...\n" << endl;


cout << "Arreglo generado con exito" << endl;
}// Llave de cierre en la funcion generaArregloDesordenado
//---------------------------------------------------------------------------------

void imprimeArreglo(int []){

  for (int i = 0; i < 10 ; i++) {

    cout << a[i] << " ";

  }// Llave de cierre en el ciclo for


}// LLave de cierre en la funcion imprimeArreglo
//---------------------------------------------------------------------------------
int CapturaSegura(const char solicitud[]){

     int n; // Variable de uso local

     while(true){
         cout << solicitud;
        cin >> n;
         if(cin.bad()){
            cout << "Ocurrio un error irrecuperable en el flujo de entrada" << endl;
            exit(EXIT_FAILURE);
             return 1;
         }
         if(cin.fail()){
            cout << "Error: no es un numero. Introduzca de nuevo..." << endl;
            cin.clear();
             cin.ignore(numeric_limits<int>::max(), '\n');
             continue;
        }

       return n;
     }
 }//Llave de cierre en la funcion CapturaSegura
 //---------------------------------------------------------------------------------
int defineSecuencia(int, int, int){
  int nTAM, tipo_arreglo, tipo_algoritmo,

  cout << "Seleccione los valores para la secuencia de ejecucion\n" << endl;
  cout << "Valores permitidos para n -> 10, 20, 30, 40, 50, 60, 70, 80, 90, 100" << endl;
  nTAM = CapturaSegura("Ingrese el valor de n: ");

  cout << "El orden del arreglo: " << endl;
  cout << "Ordenado [1]" << endl;
  cout << "Aleatorio [2]" << endl;
  cout << "Desodenado(invertido)" << endl;
  tipo_arreglo = CapturaSegura("Seleccione el orden del arreglo");

  cout << "Seleccione el algoritmo de ordenamiento: "
  cout << "Merge-Sort [1]" << endl;
  cout << "Insertion-Sort [2]" << endl;
  cout << "Selection-Sort [3]" << endl;
  tipo_algoritmo = CapturaSegura("Seleccione una algoritmo de ordenamiento");

  return nTAM, tipo_arreglo, tipo_algoritmo;


}// Llave de cierre en la funcion imprimeMenu
//---------------------------------------------------------------------------------
#endif //TAREA_1_UTILERIA_H
