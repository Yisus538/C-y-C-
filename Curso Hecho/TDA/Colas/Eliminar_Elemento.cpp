#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{

    int dato;
    Nodo *siguiente;

};

void Insertar_Cola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void Suprimir_Cola(Nodo *&,Nodo *&,int &);


int main(int argc,char*argv[]){

    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato,i = 0;

    do{
        cout<<"Ingrese un dato: "<<endl; cin>>dato;
        Insertar_Cola(frente,fin,dato);
        i++;
    }while(i!=5);

 
    while(frente != NULL){
     
        Suprimir_Cola(frente,fin,dato);

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

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout<<"El Elemento "<<dato<<" a sido ingresado."<<endl;

}
bool cola_vacia(Nodo *frente){

    return (frente == NULL)? true : false;

}
void Suprimir_Cola(Nodo *&frente,Nodo *&fin,int &dato){

    dato = frente->dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente->siguiente;
    }
    delete aux;
    
}