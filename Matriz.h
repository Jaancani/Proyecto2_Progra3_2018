//
// Created by Javier on 24/3/2018.
//

#ifndef PROYECTO_MATRIZ_H
#define PROYECTO_MATRIZ_H

#include <iostream>
#include "Nodo.h"

using namespace std;


class Matriz{
public:
    static void registrarMatriz(string,Nodo *lista);
    static void imprimir(int t,Nodo *lista, string);
    static void  sumaMatriz(Nodo *listaA ,string, Nodo *listaB, string, int);
    static void  restaMatriz(Nodo *listaA ,string, Nodo *listaB, string, int);
    static int determinanteMatriz(Nodo *lista, string , int t);
    static void multiplarMatriz(Nodo* listaA ,string, Nodo * listaB, string,int, int);
};

#endif //PROYECTO_MATRIZ_H
