/**/
#include <iostream>
#include <stdlib.h>

typedef struct Nodo{

    int dato;
    Nodo* siguiente;

}Nodo;

void Insertar_Elemento(Nodo*&,Nodo*,Nodo*,int);
void Mostrar_Elementos(Nodo*,Nodo*);
void Eliminar_Nodo(Nodo*&,int);

int main(){


    Nodo* lista = nullptr;
    Nodo* aux = nullptr;
    Nodo* nuevo_nodo = nullptr;
    int dato,opc;
 
    do{
        std::cout<<"\tMENU"<<std::endl;
        std::cout<<"1. Insertar elementos en la lista.\n2. Mostrar Elementos de la lista\n3. Eliminar Nodo\n4. Salir\nOPCION: "<<std::endl;
        std::cin>>opc;
        system("cls");

        switch(opc){
            case 1: Insertar_Elemento(lista,aux,nuevo_nodo,dato); break;
            case 2: Mostrar_Elementos(lista,aux); break;
            case 3: 
                std::cout<<"Ingrese elemento a eliminar: "<<std::endl; std::cin>>dato;
                Eliminar_Nodo(lista,dato);
                std::cout<<"\n";
            break;
        }
    }while(opc != 4);

    system("pause");
    return 0;
}
void Insertar_Elemento(Nodo*& lista,Nodo* aux,Nodo* nuevo_nodo,int dato){
    
    int i = 0;

    do{
        std::cout<<"Ingrese un dato: "<<std::endl; std::cin>>dato;
        nuevo_nodo = new Nodo();
        nuevo_nodo->dato = dato;
        nuevo_nodo->siguiente = nullptr;

        if(lista==nullptr){
            lista = nuevo_nodo;
        }else{
            aux = lista;
            while(aux->siguiente!=nullptr){
                aux = aux->siguiente;
            }
            aux->siguiente = nuevo_nodo;
        }
        i++;
    }while(i!=5);
}
void Mostrar_Elementos(Nodo* lista,Nodo* aux){

    if(lista==nullptr){
        std::cout<<"La lista se encuentra vacia."<<std::endl;
    }else{
        aux = lista;

        while(aux!=nullptr){
            std::cout<<aux->dato<<" ";
            aux = aux->siguiente;
        }  
        std::cout<<"\n";
    }


}
void Eliminar_Nodo(Nodo*& lista,int dato){

    if(lista!=nullptr){//Esta lista esta vacia?
        Nodo* aux_borrar = nullptr;
        Nodo* anterior = nullptr;

        aux_borrar = lista;
        //Recorrer la lista
        while((aux_borrar != nullptr) && (aux_borrar->dato != dato)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }
        if(aux_borrar==nullptr){//Elemento no encontrado.
            std::cout<<"El elemento no fue encontrado."<<std::endl;
        }else if(anterior == nullptr){//Primer elemento es el que se va eliminar
            lista = lista->siguiente;
            delete aux_borrar;
        }else{//El elemento esta en la lista pero no es el primer Nodo.
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
            
        }
    }
}