#include <iostream>
#include <conio.h>
#include "Matriz.h"
#include "nodo.h"
using namespace std;

int main() {
    int opc=0;
    string a ;
    string b;
    Nodo *listaA=0;
    Nodo *listaB=0;
    Nodo *listaC=0;
    Nodo *listaD=0;
    Nodo *listaE=0;

    do{
        cout <<"------****** OPERACIONES CON MATRICES *******------"<<endl;
        cout <<"1. Suma de matrices"<<endl;
        cout <<"2. Resta de matrices"<<endl;
        cout <<"3. Multiplicacion de matrices"<<endl;
        cout <<"4. Calculo de determinante"<<endl;
        cout <<"5. Salir"<<endl;

        cout <<"Ingrese una opcion: ";
        cin >>opc;
        if(opc>5 || opc<1)
            cout <<"Opcion no valida"<<endl;


        switch (opc) {
                case 1:
                    while(a!="matrizA.dat") {
                        cout << "Ingrese el nombre del archivo de la Matriz A: ";
                        cin >> a;
                        Matriz::registrarMatriz(a,listaA);
                        Matriz::imprimir(3,listaA,a);

                    }
                    while(b!="matrizB.dat") {
                        cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                        cin >> b;
                        Matriz::registrarMatriz(b,listaB);
                        Matriz::imprimir(3,listaB,b);

                    }
                    cout<<endl<<"--------------Respuesta SUMA -----------"<<endl;
                    Matriz::sumaMatriz(listaA,a,listaB,b,3);
                    break;
            case 2:
                while(a!="matrizA.dat") {
                    cout << "Ingrese el nombre del archivo de la Matriz A: ";
                    cin >> a;
                    Matriz::registrarMatriz(a,listaA);
                    Matriz::imprimir(3,listaA,a);

                }
                while(b!="matrizB.dat") {
                    cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                    cin >> b;
                    Matriz::registrarMatriz(b,listaB);
                    Matriz::imprimir(3,listaB,b);

                }
                cout<<endl<<"--------------Respuesta Resta-----------"<<endl;
                Matriz::restaMatriz(listaA,a,listaB,b,3);
                break;
            case 3:

                while(a!="matrizC.dat") {
                    cout << "Ingrese el nombre del archivo de la Matriz A: ";
                    cin >> a;
                    Matriz::registrarMatriz(a,listaC);
                    Matriz::imprimir(2,listaC,a);
                }
                while(b!="matrizD.dat") {
                    cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                    cin >> b;
                    Matriz::registrarMatriz(a,listaD);
                    Matriz::imprimir(3,listaD,a);
                }

                break;
            case 4:
                cout<<"1.Matriz 2x2 \n2.Matriz 3x3"<<endl;
                cout<<"Ingrese Opcion: ";
                int opcion;
                cin>>opcion;
                if(opcion==1) {
                    while (a != "matrizE.dat") {
                        cout << "Ingrese el nombre del archivo de la Matriz A: ";
                        cin >> a;
                        Matriz::registrarMatriz(a, listaE);
                        Matriz::imprimir(2, listaE, a);
                        cout << "Determinante: " << Matriz::determinanteMatriz(listaE, a, 2) << endl;
                    }
                }else if(opcion==2){
                    while (a != "matrizE.dat") {
                        cout << "Ingrese el nombre del archivo de la Matriz A: ";
                        cin >> a;
                        Matriz::registrarMatriz(a, listaE);
                        Matriz::imprimir(3, listaE, a);
                        cout << "Determinante: " << Matriz::determinanteMatriz(listaE, a, 3) << endl;
                    }
                }

                break;
        }
    }while(opc!=5);
}