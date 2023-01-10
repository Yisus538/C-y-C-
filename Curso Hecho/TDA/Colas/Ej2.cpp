/**/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{

    int dato;
    Nodo *siguiente;

};

void Insertar_Cola(Nodo *&,Nodo *&,int);
bool Cola_Vacia(Nodo *);
void Suprimir_Nodo(Nodo *&,Nodo *&,int &);

int main(int argc,char*argv[]){

    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato = 0,i = 0;

    do{
        cout<<"Ingrese el dato: "<<endl; cin>>dato;
        Insertar_Cola(frente,fin,dato);
        i++;
    }while(i!=5);

    while(frente != NULL){
        Suprimir_Nodo(frente,fin,dato);

        if(frente != NULL){
            cout<<dato<<" , ";
        }else{
            cout<<dato<<" . ";
        }
    }

    system("pause");
    return 0;
}
void Insertar_Cola(Nodo *&frente,Nodo *&fin,int dato){

    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = NULL;

    if(Cola_Vacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}
bool Cola_Vacia(Nodo *frente){
    return (frente==NULL)? true : false;
}
void Suprimir_Nodo(Nodo *&frente,Nodo *&fin,int &dato){

    dato = frente->dato;
    Nodo *aux = frente;

    if(frente==fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente->siguiente;
    }
    delete aux;
}