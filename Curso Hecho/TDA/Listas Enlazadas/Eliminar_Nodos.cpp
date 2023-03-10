/**/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{

    int dato;
    Nodo *siguiente;

};

void Insertar_Elemento(Nodo *&,Nodo *,Nodo *,int);
void Mostrar_Elementos(Nodo *,Nodo *);
void Eliminar_Nodo(Nodo *&,int);

int main(int argc,char*argv[]){

    Nodo *lista = NULL;
    Nodo *aux = NULL;
    Nodo *nuevo_nodo = NULL;
    int dato,opc;
 
    do{
        cout<<"\tMENU"<<endl;
        cout<<"1. Insertar elementos en la lista.\n2. Mostrar Elementos de la lista\n3. Eliminar Nodo\n4. Salir\nOPCION: "<<endl;
        cin>>opc;
        system("cls");

        switch(opc){
            case 1: Insertar_Elemento(lista,aux,nuevo_nodo,dato); break;
            case 2: Mostrar_Elementos(lista,aux); break;
            case 3: 
                cout<<"Ingrese elemento a eliminar: "<<endl; cin>>dato;
                Eliminar_Nodo(lista,dato);
                cout<<"\n";
            break;
        }
    }while(opc != 4);

    system("pause");
    return 0;
}
void Insertar_Elemento(Nodo *&lista,Nodo *aux,Nodo *nuevo_nodo,int dato){
    
    int i = 0;

    do{
        cout<<"Ingrese un dato: "<<endl; cin>>dato;
        nuevo_nodo = new Nodo();
        nuevo_nodo->dato = dato;
        nuevo_nodo->siguiente = NULL;

        if(lista==NULL){
            lista = nuevo_nodo;
        }else{
            aux = lista;
            while(aux->siguiente!=NULL){
                aux = aux->siguiente;
            }
            aux->siguiente = nuevo_nodo;
        }
        i++;
    }while(i!=5);
}
void Mostrar_Elementos(Nodo *lista,Nodo *aux){

    if(lista==NULL){
        cout<<"La lista se encuentra vacia."<<endl;
    }else{
        Nodo *aux = lista;

        while(aux!=NULL){
            cout<<aux->dato<<" ";
            aux = aux->siguiente;
        }  
        cout<<"\n";
    }


}
void Eliminar_Nodo(Nodo *&lista,int dato){

    if(lista!=NULL){//Esta lista esta vacia?
        Nodo *aux_borrar = NULL;
        Nodo *anterior = NULL;

        aux_borrar = lista;

        //Recorrer la lista
        while((aux_borrar != NULL) && (aux_borrar->dato != dato)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if(aux_borrar==NULL){//Elemento no encontrado.
            cout<<"El elemento no fue encontrado."<<endl;
        }else if(anterior == NULL){//Primer elemento es el que se va eliminar
            lista = lista->siguiente;
            delete aux_borrar;
        }else{//El elemento esta en la lista pero no es el primer Nodo.
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}