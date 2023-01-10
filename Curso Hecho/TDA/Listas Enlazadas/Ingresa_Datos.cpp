#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{

    int dato;
    struct Nodo *siguiente;

};

void Insertar_Elemento(struct Nodo *&lista,int dato);

int main(int argc,char*argv[]){

    Nodo *lista = NULL;
    int dato = 0,i = 0;

    do{

        cout<<"Ingrese un dato: "<<endl; cin>>dato;
        Insertar_Elemento(lista,dato);
        i++;
    }while(i!=5);

    system("pause");
    return 0;
}
void Insertar_Elemento(struct Nodo *&lista,int dato){

    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato < dato)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout<<"EL elemento "<<dato<<" insertado a lista correctamente."<<endl;

}