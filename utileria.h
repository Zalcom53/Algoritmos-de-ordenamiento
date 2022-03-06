
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
void generaArregloAleatorio(int []);// Esta funcion recibe un arreglo de enteros.
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


}// Llave de cierre en la funcion generaArregloAleatorio
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
  cout << "MERGESORT [1]" << endl;
  cout << "INSERTONSORT [2]" << endl;
  cout << "SELECTIONSORT [3]" << endl;
  tipo_algoritmo = CapturaSegura("Seleccione una algoritmo de ordenamiento");

  return nTAM, tipo_arreglo, tipo_algoritmo;


}// Llave de cierre en la funcion imprimeMenu
//---------------------------------------------------------------------------------
#endif //TAREA_1_UTILERIA_H
