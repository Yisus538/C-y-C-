#include <iostream>
#include <stdlib.h>


typedef struct node{

    int data;
    node* next;

}node;

void Insertar_Cola(node*&,node*&,int);
bool cola_vacia(node*);

int main(){

    node* front = nullptr;
    node* back = nullptr;
    int data;

    std::cout<<"Digite un numero: "<<std::endl; std::cin>>data;
    Insertar_Cola(front,back,data);    
    std::cout<<"Elemento "<<data<< " insertado en cola directamente."<< std::endl;

    system("pause");
    return 0;
}
void Insertar_Cola(node*& front,node*& back,int data){

    node* new_node = new node();
    new_node->data = data;
    new_node->next = nullptr;

    if(cola_vacia(front)){
       front = new_node;
    }else{
        back->next = new_node;
    }
    back = new_node;
}
//Funcion para determinar si la cola esta vacia  no
bool cola_vacia(node* front){
    return (front == NULL);
}