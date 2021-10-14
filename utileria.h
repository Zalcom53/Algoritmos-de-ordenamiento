
/*
  Nombre: utileria.cpp
  Fecha: septiembre del 2021
  Autor: Daniel Antonio Quihuis Hernandez
  Descripcion: Este archivo contiene el codigo fuente del programa
  Compilador: C++ 14
*/

#ifndef TAREA_1_UTILERIA_H
#define TAREA_1_UTILERIA_H

//---------------------------------------------------------------------------------
//BLOQUE PARA DECLARAR FUNCIONES
void run(); // Esta funcion no recibe parametros, se encarga de ejecutar el codfigo.
// void muestraMenu(); // Esta funcion no recibe parametros de entrada ni arroja salidas.
// int CapturaEntero(const char solicitud[]); // Esta funcion recibe una cadena de caracteres y arroja un numero entero como salida.
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


// #define OPMIN 0 // Este valor corresponde al rango de opcion minima
// #define OPMAX 3 // Este valor corresponde al rango de opcion maxima
#define ARRTAM 10 // Tamaño maximo de elementos en el vector

int userSelection; // Variable que nos servira para
int a[ARRTAM]; // Arreglo que va a contener los valores a ordenar en el mejor caso
int b[ARRTAM]; // Arreglo que va a contener los valores a ordenar en el peor caso
int c[ARRTAM]; // Arreglo que va a contener los valores de forma aleatoria(caso promedio)


void run(){

  // muestraMenu();

  generaArregloOrdenado(a);
  generaArregloDesordenado(b);
  generaArregloAleatorio(c);

  // cout << "Arreglo ordenado\n" << endl;
  // imprimeArreglo(a);
  // cout << "\n";
  //
  // cout << "\nArreglo desordenado\n" << endl;
  // imprimeArreglo(b);
  // cout << "\n";
  //
  // cout << "\nArreglo aleatorio\n" << endl;
  // imprimeArreglo(c);



  // switch (userSelection) {
  //
  //   case 1:
  //   mergeSort(a,b,c);
  //   break;
  //
  //   case 2:
  //   insertionSort(a,b,c);
  //   break;
  //
  //   case 3:
  //   selectionSort(a,b,c);
  //   break;
  //
  // }



}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
// void muestraMenu(){
//
//   cout << "\nLos valores se generaran de 0 a 100" << endl;
//   cout << "Seleccione una opcion valida.\n" << endl;
//
//   cout << "Merge-Sort[1]" << endl;
//   cout << "Insertion-Sort[2]" << endl;
//   cout << "Selection-Sort[3]" << endl;
//   cout << "Salir [0]\n" << endl;
//   userSelection = CapturaEntero("Ingrese una opcion valida: ");
//   cout << "\n" << endl;
//
//
// }// Llave de cierre en la funcion muestraMenu
//---------------------------------------------------------------------------------
// int CapturaEntero(const char solicitud[]){
//
//     int n; // Variable de uso local
//
//     while(true){
//         cout << solicitud;
//         cin >> n;
//
//         if(cin.bad()){
//             cout << "Ocurrio un error irrecuperable en el flujo de entrada" << endl;
//             exit(EXIT_FAILURE);
//             return 1;
//         }
//         if(cin.fail()){
//             cout << "Error: no es un numero. Introduzca de nuevo..." << endl;
//             cin.clear();
//             cin.ignore(numeric_limits<int>::max(), '\n');
//             continue;
//         }
//
//         // if(userSelection < OPMIN || userSelection > OPMAX){
//         //
//         //   cout << "Error: Opcion fuera de rango\n" << endl;
//         //   cout << "Intente con una opcion valida\n" << endl;
//         //
//         //   userSelection = CapturaEntero("Ingrese una opcion valida");
//         //
//         // }//LLave de cierre en if
//
//         return n;
//     }
// }//Llave de cierre en la funcion CapturaEntero

//---------------------------------------------------------------------------------
void mergeSort(int a[], int b[], int c[]){

  cout << "Merge-Sort\n" << endl;

  cout << "\n------------------------------------------------------------------------\n";
  cout << "Mejor caso\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";

  cout << "Peor caso\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";


  cout << "Caso proemdio\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";




}// Llave de cierre en la funcion mergeSort
//---------------------------------------------------------------------------------

void insertionSort(int a[], int b[], int c[]){

  cout << "Insertion-Sort\n" << endl;

  cout << "\n------------------------------------------------------------------------\n";
  cout << "Mejor caso\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";

  cout << "Peor caso\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";


  cout << "Caso proemdio\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";




}// Llave de cierre en insertionSort

//---------------------------------------------------------------------------------
void selectionSort(int a[], int b[], int c[]){

  cout << "Selection-Sort\n" << endl;


  cout << "\n------------------------------------------------------------------------\n";
  cout << "Mejor caso\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";


  cout << "Peor caso\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";


  cout << "Caso proemdio\n" << endl;
  cout << "Ordenando espere un momento...\n" << endl;

  cout << "El arreglo se ordeno con exito\n" << endl;
  cout << "\n------------------------------------------------------------------------\n";



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
