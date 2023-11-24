/*
Ejercicio 1: hacer un programa para ingresar numeros enteros a una pila hasta que el usuario lo decida,
             despues mostrar los elementos y eliminarlos.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{

    int data;
    Node *next;

};

void push(Node **head,int dato);
void Empty(Node **head,int &dato);

int main(int argc,char**argv){

    Node* head = NULL;
    int dato = 0;
    char rta = ' ';

    do{
        cout<<"Ingrese un dato: "<<endl; cin>>dato;
        push(&head,dato);
        cout<<"Desea agregar otro elemento? (s/n): "<<endl; cin>>rta;
    }while(rta == 'S' || rta == 's');

    while(head != NULL){
        Empty(&head,dato);
        if(head!=NULL){
            cout<<dato<<" , ";
        }else{
            cout<<dato<<" . ";
        }
    }
    cout<<"\n";

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