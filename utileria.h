
/*
  Nombre: utileria.cpp
  Fecha: septiembre del 2021
  Autor: Daniel Antonio Quihuis Hernandez
  Descripcion: Este archivo contiene el codigo fuente del programa
  Version de archivo: 0.7.4
  Compilador: C++ 14
*/

#ifndef TAREA_1_UTILERIA_H
#define TAREA_1_UTILERIA_H

//---------------------------------------------------------------------------------
//BLOQUE PARA DECLARAR FUNCIONES
void muestraMenu(); // Esta funcion no recibe parametros de entrada ni arroja salidas
int CapturaEntero(const char solicitud[]); // Esta funcion recibe una cadena de caracteres y arroja un numero entero como salida
//---------------------------------------------------------------------------------




#include <iostream>
#include <cstdlib>

using namespace std;


#define OPMIN 0 // Este valor corresponde al rango de opcion minima
#define OPMAX 3 // Este valor corresponde al rango de opcion maxima
#define ARRTAM 10 // Tamaño maximo de elementos en el vector

int userSelection; // Variable que nos servira para
int a[ARRTAM]; // Arreglo que va a contener los valores a ordenar

run(){

  muestraMenu();



}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
void muestraMenu(){

  cout << "Seleccione una opcion valida.\n";

  cout << "Merge-Sort[1]" << endl;
  cout << "Insertion-Sort[2]" << endl;
  cout << "Selection-Sort[3]" << endl;
  cout << "Salir [0]\n" << endl;

  userSelection = CapturaEntero("Ingrese una opcion valida");


}// Llave de cierre en la funcion muestraMenu
//---------------------------------------------------------------------------------
int CapturaEntero(const char solicitud[]){

    int n; // Variable de uso local

    while(true){
        cout << solicitud;
        cin >> n;

        if(cin.bad()){
            cout << "Ocurri\242 un error irrecuperable en el flujo de entrada" << endl;
            exit(EXIT_FAILURE);
            return 1;
        }
        if(cin.fail()){
            cout << "Error: no es un n\243mero. Introduzca de nuevo..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
            continue;
        }

        if(userSelection < OPMIN || userSelection > OPMAX){



        }//LLave de cierre en if

        return n;
    }
}//Llave de cierre en la funcion CapturaEntero

//---------------------------------------------------------------------------------
void mergeSort(){

cout << " Merge-Sort\n" << endl;



}// Llave de cierre en la funcion mergeSort
//---------------------------------------------------------------------------------

void insertionSort(){

  cout << "Insertion-Sort\n" << endl;




}// Llave de cierre en insertionSort

//---------------------------------------------------------------------------------
void selectionSort(){


cout << "Selection-Sort\n" << endl;


}// Llave de cierre en la funcion selectionSort

//---------------------------------------------------------------------------------
int generaArregloOrdenado(int a[]){

cout << "Generando arreglo ordenado espere un momento...\n" << endl;

for (int i = 0; i < ARRTAM -1 ; i++) {
  a[i] = i;
}// Llave de cierre en el ciclo for

}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
int generaArregloDesordenado(int a[]){

cout << "Generando arreglo desordenado, espere un momento...\n" << endl;

for (int i = 0; i < ARRTAM -1 ; i++) {
  a[i] = i;
}// Llave de cierre en el ciclo for


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
int generaArregloAleatorio(int a[]){

cout << "Generando arreglo de forma aleatoria, espere un momento...\n" << endl;

for (int i = 0; i < ARRTAM -1 ; i++) {
  a[i] = i;
}// Llave de cierre en el ciclo for


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
#endif //TAREA_1_UTILERIA_H
