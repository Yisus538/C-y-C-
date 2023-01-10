/*
Ejercicio 2: Hacer un programa en C++, utilizando pilas que contenga el siguiente menu:

    1. Ingresar un caracter.
    2. Mostrar los elementos de una pila.
    3, Salir.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{

    char data;
    Node *next;

};

void push(Node **head,int dato);
void Empty(Node **head,int &dato);

int main(int argc,char**argv){

    Node *head = NULL;
    int  opc = 0;
    char rta = ' ',dato = ' ';

    do{
        cout<<"\tMENU\n"<<endl;
        cout<<"1. Ingrese caracter a la pila.\n2. Mostrar elementos.\n3. Salir\nOPCION: "<<endl;
        cin>>opc;
        if(opc!=3){
            system("cls");
        }

        switch(opc){

            case 1: 
                do{
                    cout<<"Ingrese un dato: "<<endl; cin>>dato;
                    push(&head,dato);
                    cout<<"Desea agregar otro elemento? (s/n): "<<endl; cin>>rta;
                }while(rta == 'S' || rta == 's');
                system("pause");
                system("cls");
            break;

            case 2: 
            
                while(head != NULL){
                    Empty(&head,dato);
                    if(head!=NULL){
                        cout<<dato<<" , ";
                    }else{
                        cout<<dato<<" . ";
                    }
                }
                system("pause");
                system("cls");
            break;

            case 3: break;
        }
        
    }while(opc!=3);

    
    system("pause");
    return 0;
}
void push(Node **head,int dato){

    Node *new_node = new Node();
    new_node->data = dato;
    new_node->next  = *(head);
    *(head) = new_node;


}
void Empty(Node **head,int &dato){

    Node *aux = *(head);
    dato = aux->data;
    *(head) = aux->next; 
    delete aux;


}