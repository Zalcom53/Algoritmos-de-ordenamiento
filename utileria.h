
/*
  Nombre: utileria.cpp
  Fecha: septiembre del 2021
  Autor: Daniel Antonio Quihuis Hernandez
  Descripcion: Este archivo contiene el codigo fuente del programa
  Version: 0.1.4
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

run(){

    int userSelection;


}// Llave de cierre en la funcion run

//---------------------------------------------------------------------------------
void muestraMenu(){

    do {
        userSelection = CapturaEntero("Ingrese una opcion valida:");

    } while(userSelection != 0);


    switch (userSelection) {
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

#endif //TAREA_1_UTILERIA_H
