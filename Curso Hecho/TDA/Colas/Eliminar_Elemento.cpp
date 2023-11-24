#include <iostream>
#include <stdlib.h>


struct Nodo{

    int dato;
    Nodo* siguiente;

};

void Insertar_Cola(Nodo*&,Nodo*&,int);
bool cola_vacia(Nodo*);
void Suprimir_Cola(Nodo*&,Nodo*&,int &);


int main(int argc,char*argv[]){

    Nodo* frente  {nullptr};
    Nodo* fin {nullptr};
    int dato,i = 0;

    do{
        std::cout<<"Ingrese un dato: "<<std::endl; std::cin>>dato;
        Insertar_Cola(frente,fin,dato);
        i++;
    }while(i!=5);

 
    while(frente != nullptr){
     
        Suprimir_Cola(frente,fin,dato);

        if(frente != nullptr){
            std::cout<<dato<<" , ";
        }else{
            std::cout<<dato<<" . ";
        }
    }

    system("pause");
    return 0;
}
void Insertar_Cola(Nodo*& frente,Nodo*& fin,int dato){

    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = nullptr;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    std::cout<<"El Elemento "<<dato<<" a sido ingresado."<<std::endl;

}
bool cola_vacia(Nodo* frente){

    return (frente == nullptr);

}
void Suprimir_Cola(Nodo*& frente,Nodo* &fin,int& dato){

    dato = frente->dato;
    Nodo* aux = frente;

    if(frente == fin){
        frente = nullptr;
        fin = nullptr;
    }else{
        frente = frente->siguiente;
    }
    delete aux;
    
}