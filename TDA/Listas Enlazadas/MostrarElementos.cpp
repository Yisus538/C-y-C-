#include <iostream>
#include <stdlib.h>

typedef struct Nodo{

    int dato;
    Nodo* siguiente;

}Nodo;

void Insertar_Elemento(Nodo*&,int);
void Mostrar_Elemento(Nodo*);

int main(){

    Nodo* lista = nullptr;
    int dato = 0,i = 0;

    do{

        std::cout<<"Ingrese un dato: "<<std::endl; std::cin>>dato;
        Insertar_Elemento(lista,dato);
        i++;
    }while(i!=5);

    Mostrar_Elemento(lista);

    system("pause");
    return 0;
}
void Insertar_Elemento(Nodo*& lista,int dato){

    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;

    Nodo* aux1 = lista;
    Nodo* aux2;

    while((aux1 != nullptr) && (aux1->dato < dato)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    std::cout<<"EL elemento "<<dato<<" insertado a lista correctamente."<<std::endl;

}
void Mostrar_Elemento(Nodo* lista){

    Nodo* actual = new Nodo();
    actual = lista;

    std::cout<<"\n\nLos datos de la lista son: "<<std::endl;
    while(actual != nullptr){

        std::cout<<actual->dato<<" ";
        actual = actual->siguiente;

    }
    std::cout<<"\n";
}