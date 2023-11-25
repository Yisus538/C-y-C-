#include <iostream>
#include <stdlib.h>


struct Nodo{

    int dato;
    Nodo* siguiente;

};

void Insertar_Cola(Nodo*&,Nodo*&,int);
bool cola_vacia(Nodo*);

int main(){

    struct Nodo* frente = nullptr;
    struct Nodo* fin = nullptr;
    int dato;

    std::cout<<"Digite un numero: "<<std::endl; std::cin>>dato;
    Insertar_Cola(frente,fin,dato);    
    std::cout<<"Elemento "<<dato<< " insertado en cola directamente."<< std::endl;

    system("pause");
    return 0;
}
void Insertar_Cola(Nodo*& frente,Nodo*& fin,int dato){

    struct Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = nullptr;

    if(cola_vacia(frente)){
       frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}
//Funcion para determinar si la cola esta vacia  no
bool cola_vacia(Nodo* frente){
    return (frente == NULL);
}