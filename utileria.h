
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

int userSelection; // Variable que nos servira para
int a[10]; // Arreglo que va a contener los valores a ordenar

run(){


}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
void muestraMenu(){

  do {
    /* code */
  } while(userSelection );


    switch (userSelection) {


        case 1:
        cout << "Selection sort\n" << endl;
        break;

        case 2:
        cout << "Insertion sort\n" << endl;
        break;

        case 3:
        cout << "Merge sort\n" << endl;

        case 0:
        cout << "Salir[0]\n" << endl;
        break;




    }



}// Llave de cierre en la funcion muestraMenu
//---------------------------------------------------------------------------------
int CapturaEntero(const char solicitud[]){
    int n;
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



        return n;
    }
}//Llave de cierre en la funcion CapturaEntero
//---------------------------------------------------------------------------------
int generaArregloOrdenado(int n){


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
int generaArregloDesordenado(int n){


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
int generaArregloAleatorio(int n){


}// Llave de cierre en la funcion generaArregloOrdenado
//---------------------------------------------------------------------------------
#endif //TAREA_1_UTILERIA_H
