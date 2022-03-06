
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
void imprimeMenu(); // Esta fucion no recibe parametros y se encarga de imprimir un menu
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
 }//Llave de cierre en la funcion CapturaEntero
 //---------------------------------------------------------------------------------
void imprimeMenu(){
  cout << "Menu\n" << endl;


}// Llave de cierre en la funcion imprimeMenu
//---------------------------------------------------------------------------------
#endif //TAREA_1_UTILERIA_H
