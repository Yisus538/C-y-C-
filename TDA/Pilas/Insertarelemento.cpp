#include <iostream>
#include <stdlib.h>

typedef struct Node{

    int data;
    Node* next;

}Node;


void push(Node**,int);

int main(){

    Node* sp = NULL;
    int dato = 0;


    std::cout<<"Ingrese un dato: "<<std::endl; std::cin>>dato;
    push(&sp,dato);

    system("pause");
    return 0;
}
void push(Node** sp,int dato){

    Node* new_node = new Node();
    new_node->data = dato;
    new_node->next  = *(sp);
    *(sp) = new_node;

    std::cout<<"El elemento "<<dato<<" a sido ingresado correctamente."<<std::endl;

    system("pause");
    system("cls");


}