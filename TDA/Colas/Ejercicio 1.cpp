/*
    1. Insertar un caracter a una cola
    2. Mostrar todos los elementos de la cola
    3. Salir
*/
#include <iostream>
#include <stdlib.h>

struct Nodo{

    char dato;
    Nodo* siguiente;

};

void Insertar_Cola(Nodo*&,Nodo*&,char);
void Mostrar(Nodo*);
bool Cola_Vacia(Nodo*);
void suprimir_cola(Nodo*&,Nodo*&,char&);

int main(){

    Nodo* frente {nullptr};
    Nodo* fin {nullptr};
    char dato;
    int i = 0,opc;

    do{
        std::cout<<"\tMENU"<<std::endl;
        std::cout<<"1. Insertar un caracter a la cola.\n2. Mostrar todos los elementos de la cola.\n3. Salir\nOPCION: "<<std::endl;
        std::cin>>opc;
        if(opc!=3){
            system("cls");
        }
        switch(opc){
            case 1: 
                do{
                    std::cout<<"Ingrese el caracter: "<<std::endl; std::cin>>dato;
                    Insertar_Cola(frente,fin,dato);
                    i++;
                }while(i!=5);
                system("cls");
            break;
            case 2: std::cout<<"Mostrando elementos de la cola"<<std::endl;
                while(frente != NULL){
                    suprimir_cola(frente,fin,dato);
                    if(frente != NULL){
                        std::cout<<dato<<" , ";
                    }else{
                        std::cout<<dato<<" . ";
                    }
                }
                std::cout<<"\n";
            break;
        }
    
    }while(opc != 3);


    system("pause");
    return 0;
}
void Insertar_Cola(Nodo*& frente,Nodo*& fin,char dato){

    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = nullptr;
    

    if(Cola_Vacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;

    std::cout<<"Elemento "<<dato<<" ingresado correctamente."<<std::endl;
}
bool Cola_Vacia(Nodo* frente){
    return (frente == nullptr);
}
void suprimir_cola(Nodo*& frente,Nodo*& fin,char& dato){

    dato = frente->dato;
    Nodo* aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente->siguiente;
    }
    delete aux;

}