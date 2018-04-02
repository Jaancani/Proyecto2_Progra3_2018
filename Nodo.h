//
// Created by Javier on 24/3/2018.
//

#ifndef PROYECTO_NODO_H
#define PROYECTO_NODO_H

struct Nodo{
    int valor;
    Nodo *sig;
    Nodo *ant;
    Nodo(){
        sig =0;
        ant=0;
    }
};
void insertarNodo(Nodo *&, Nodo *);
#endif //PROYECTO_NODO_H
