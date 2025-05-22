/*
Ejercicio 1: hacer un programa para ingresar numeros enteros a una pila hasta que el usuario lo decida,
             despues mostrar los elementos y eliminarlos.
*/
#include <iostream>
#include <stdlib.h>

typedef struct Node{

    int data;
    Node* next;

}Node;

void push(Node**,int );
void Empty(Node**,int&);

int main(){

    Node* sp = NULL;
    int dato = 0;
    char rta = ' ';

    do{
        std::cout<<"Ingrese un dato: "<<std::endl; std::cin>>dato;
        push(&sp,dato);
        std::cout<<"Desea agregar otro elemento? (s/n): "<<std::endl; std::cin>>rta;
    }while(rta == 'S' || rta == 's');

    while(sp != NULL){
        Empty(&sp,dato);
        if(sp!=NULL){
            std::cout<<dato<<" , ";
        }else{
            std::cout<<dato<<" . ";
        }
    }
    std::cout<<"\n";

    system("pause");
    return 0;
}
void push(Node** sp,int dato){

    Node* new_node = new Node();
    new_node->data = dato;
    new_node->next  = *(sp);
    *(sp) = new_node;


}
void Empty(Node** sp,int &dato){

    Node* aux = *(sp);
    dato = aux->data;
    *(sp) = aux->next; 
    delete aux;


}