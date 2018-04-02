//
// Created by Javier on 24/3/2018.
//
#include "Matriz.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include "Nodo.h"
using namespace std;

void Matriz::registrarMatriz(string nombre, Nodo*lista) {
    ifstream archivoMatriz(nombre, ios::in);
    if (!archivoMatriz) {
        cout << "Error al abrir el archivo [ " << nombre << " ]" << endl;
        cout <<"(Recordatorio... el formato del archivo debe ser .dat)"<<endl;
        return;
    }
    Nodo *nuevo=new Nodo;
    int ma;
    while (!archivoMatriz.eof()) {


        while(archivoMatriz>>ma){
            nuevo->valor=ma;
            insertarNodo(lista,nuevo);
        }
    }
    archivoMatriz.close();
}
void Matriz::imprimir(int t, Nodo *lista, string nombre) {

    ifstream archivosIn(nombre,ios::in);
    int v;

    if (!archivosIn){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    while(archivosIn>>v){
        if(cont!=t){
            if(v==0){
                continue;
            }
            cont ++;
            cout<<v <<" ";

        }else {
            cont=0;
            if(v==0){
                cont++;
            }
            cout<<endl<<v<<" ";
            cont++;

        }
    }
    cout<<endl;

    archivosIn.close();

}
void Matriz::sumaMatriz(Nodo *listaA , string nombreA , Nodo *listaB ,string nombreB , int t)  {
    ofstream archivosuma("matrizSuma.dat");
    if(!archivosuma){
        cout <<"Error al intentar abrir el archivo archivosuma.dat"<<endl;
        return;
    }
    ifstream archivosInA(nombreA,ios::in);
    ifstream archivosInB(nombreB,ios::in);

    int v1;
    int v2;

    if (!archivosInA && !archivosInB){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    int cont2=0;
    while(archivosInA>>v1 && archivosInB>>v2){
        if(cont!=t){
            if(v1==0 && v2==0){
                continue;
            }
            cont ++;
            cout<<(v1+v2)<<" ";
            if(cont2==3) {
                archivosuma<<'\n';
                cont2=0;
            }
            archivosuma<<v1+v2<<' ';
            cont2++;
        }else {
            cont=0;
            cout<<endl<<(v1+v2)<<" ";
            if(cont2==3) {
                archivosuma<<'\n';
                cont2=0;
            }
            cont2++;
            archivosuma<<v1+v2<<' ';
            cont++;
        }
    }
    cout<<endl;
    archivosInA.close();
    archivosInB.close();
    archivosuma.close();
}
void Matriz::restaMatriz(Nodo *listaA , string nombreA , Nodo *listaB ,string nombreB , int t)  {
    ofstream archivoResta("matrizResta.dat");
    if(!archivoResta){
        cout <<"Error al intentar abrir el archivo archivosuma.dat"<<endl;
        return;
    }
    ifstream archivosInA(nombreA,ios::in);
    ifstream archivosInB(nombreB,ios::in);

    int v1;
    int v2;
    if (!archivosInA && !archivosInB){
        cout<<"Error al leer Archivo";
        return;
    }
    int cont=0;
    int cont2=0;
    while(archivosInA>>v1 && archivosInB>>v2){
        if(cont!=t){
            if(v1==0 && v2==0){
                continue;
            }
            cont ++;
            cout<<(v1-v2)<<" ";
            if(cont2==3) {
                archivoResta<<'\n';
                cont2=0;
            }
            archivoResta<<v1+v2<<' ';
            cont2++;
        }else {
            cont=0;
            cout<<endl<<(v1-v2)<<" ";
            if(cont2==3) {
                archivoResta<<'\n';
                cont2=0;
            }
            cont2++;
            archivoResta<<v1-v2<<' ';
            cont++;
        }
    }
    cout<<endl;
    archivosInA.close();
    archivosInB.close();
    archivoResta.close();
}
int Matriz::determinanteMatriz(Nodo *lista, string nombre, int t) {
    ifstream archivoMatriz(nombre, ios::in);
    if (!archivoMatriz) {
        cout << "Error al abrir el archivo [ " << nombre << " ]" << endl;
        cout <<"(Recordatorio... el formato del archivo debe ser .dat)"<<endl;
        return -1;
    }
    int v;
    int cont=0;
    int total=0;
    if (t==2){
        int arr[4];

        while(archivoMatriz>>v){
            arr[cont]=v;
            cont++;

        }
        total=((arr[0]*arr[3])-(arr[1]*arr[2]));
        return total;

    }
    if (t==3){
        int arr[9];
        while (archivoMatriz>>v){
            arr[cont]=v;
            cont++;
        }
        total=(((arr[0])*(arr[4]*arr[8])-(arr[5]*arr[7]))-((arr[1])*(arr[3]*arr[8])-(arr[5]*arr[6]))+
               ((arr[2])*(arr[3]*arr[7])-(arr[4]*arr[6])));
        return total;
    }
    archivoMatriz.close();
}
static void multiplarMatriz(Nodo* listaA ,string nombreA, Nodo * listaB, string nombreB , int n , int m){
    ofstream archivoMulti("matrizMultiplicacion.dat");
    if(!archivoMulti){
        cout <<"Error al intentar abrir el archivo archivoMultiplicacion.dat"<<endl;
        return;
    }
    ifstream archivosInA(nombreA,ios::in);
    ifstream archivosInB(nombreB,ios::in);

    int v1;
    int v2;
    if (!archivosInA && !archivosInB){
        cout<<"Error al leer Archivo";
        return;
    }
    int t=n*m;

    int arrA[t];
    int arrB[t];

    int cont=0;
    while(archivosInA>>v1 && archivosInB>>v2){
        if(v1==0 && v2==0){
            continue;
        }
        arrA[cont]=v1;
        arrB[cont]=v2;
        cont++;
    }
    int ta=m*m;
    int arrR[m];


}