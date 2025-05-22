#include <iostream>
#include <stdlib.h>

typedef struct Node{

    int data;
    Node* next;

}Node;

void push(Node**,int dato);
void Empty(Node**,int &dato);

int main(){

    Node* sp = NULL;
    int dato = 0, i = 0;

    do{
        std::cout<<"Ingrese un dato: "<<std::endl; std::cin>>dato;
        push(&sp,dato);
        i++;
    }while(i!=5);

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

    std::cout<<"El elemento "<<dato<<" a sido ingresado correctamente."<<std::endl;

    system("pause");
    system("cls");


}
void Empty(Node** sp,int& dato){

    Node* aux = *(sp);
    dato = aux->data;
    *(sp) = aux->next; 
    delete aux;


}