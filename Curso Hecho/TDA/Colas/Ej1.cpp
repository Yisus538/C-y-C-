/*
    1. Insertar un caracter a una cola
    2. Mostrar todos los elementos de la cola
    3. Salir
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{

    char dato;
    Nodo *siguiente;

};

void Insertar_Cola(Nodo *&,Nodo *&,char);
void Mostrar(Nodo *frente);
bool Cola_Vacia(Nodo *frente);
void suprimir_cola(Nodo *&frente,Nodo *&fin,char&);

int main(int argc,char argv[]){

    Nodo *frente = NULL;
    Nodo *fin = NULL;
    char dato;
    int i = 0,opc;

    do{
        cout<<"\tMENU"<<endl;
        cout<<"1. Insertar un caracter a la cola.\n2. Mostrar todos los elementos de la cola.\n3. Salir\nOPCION: "<<endl;
        cin>>opc;
        if(opc!=3){
            system("cls");
        }
        switch(opc){
            case 1: 
                do{
                    cout<<"Ingrese el caracter: "<<endl; cin>>dato;
                    Insertar_Cola(frente,fin,dato);
                    i++;
                }while(i!=5);
                system("cls");
            break;
            case 2: cout<<"Mostrando elementos de la cola"<<endl; 
                while(frente != NULL){
                    suprimir_cola(frente,fin,dato);
                    if(frente != NULL){
                        cout<<dato<<" , ";
                    }else{
                        cout<<dato<<" . ";
                    }
                }
                cout<<"\n";
            break;
        }
    
    }while(opc != 3);


    system("pause");
    return 0;
}
void Insertar_Cola(Nodo *&frente,Nodo *&fin,char dato){

    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = NULL;
    

    if(Cola_Vacia(frente)){
        frente = nuevo_nodo;
    }else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;

    cout<<"Elemento "<<dato<<" ingresado correctamente."<<endl;
}
bool Cola_Vacia(Nodo *frente){
    return (frente == NULL)? true : false;
}
void suprimir_cola(Nodo *&frente,Nodo *&fin,char &dato){

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