/**/
#include <iostream>
#include <stdlib.h>


struct Nodo{

    int dato;
    Nodo* siguiente;

};

void Insertar_Cola(Nodo*&,Nodo*&,int);
bool Cola_Vacia(Nodo*);
void Suprimir_Nodo(Nodo*&,Nodo*&,int&);

int main(){

    Nodo* frente  {nullptr};
    Nodo* fin {nullptr};
    int dato = 0,i = 0;

    do{
        std::cout<<"Ingrese el dato: "<<std::endl; std::cin>>dato;
        Insertar_Cola(frente,fin,dato);
        i++;
    }while(i!=5);

    while(frente != NULL){
        Suprimir_Nodo(frente,fin,dato);

        if(frente != NULL){
            std::cout<<dato<<" , ";
        }else{
            std::cout<<dato<<" . ";
        }
    }

    system("pause");
    return 0;
}
void Insertar_Cola(Nodo*& frente,Nodo*& fin,int dato){

    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = nullptr;

    if(Cola_Vacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}
bool Cola_Vacia(Nodo* frente){
    return (frente==nullptr);
}
void Suprimir_Nodo(Nodo*& frente,Nodo*& fin,int& dato){

    dato = frente->dato;
    Nodo *aux = frente;

    if(frente==fin){
        frente = nullptr;
        fin = nullptr;
    }else{
        frente = frente->siguiente;
    }
    delete aux;
}