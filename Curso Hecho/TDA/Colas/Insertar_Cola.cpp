#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{

    int dato;
    Nodo *siguiente;

};

void Insertar_Cola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);

int main(int argc,char*argv[]){

    struct Nodo *frente = NULL;
    struct Nodo *fin = NULL;
    int dato;

    cout<<"Digite un numero: "<<endl; cin>>dato;
    Insertar_Cola(frente,fin,dato);    
    cout<<"Elemento "<<dato<< " insertado en cola directamente."<<endl;

    system("pause");
    return 0;
}
void Insertar_Cola(Nodo *&frente,Nodo *&fin,int dato){

    struct Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
       frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}
//Funcion para determinar si la cola esta vacia  no
bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;
}