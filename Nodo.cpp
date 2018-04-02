//
// Created by Javier on 24/3/2018.
//

#include "Nodo.h"
#include <iostream>

void insertarNodo(Nodo *&lista, Nodo * n) {
    Nodo *actual;
    actual=lista;
    Nodo *nuevo = new Nodo();
    nuevo = n;

    Nodo *aux1=lista;
    Nodo *aux2;

    while((aux1!=NULL)){
        aux2=aux1;
        aux1=aux1->sig;
    }

    if(lista==aux1){
        lista=nuevo;
    }
    else{
        aux2->sig=nuevo;
    }

    nuevo->sig=aux1;
    while(actual!=0){

        actual = actual->sig;
    }
}
