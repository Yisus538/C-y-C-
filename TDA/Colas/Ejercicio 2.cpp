/**/
#include <iostream>
#include <stdlib.h>


typedef struct node{

    int data;
    node* next;

}node;

void Insertar_Cola(node*&,node*&,int);
bool Cola_Vacia(node*);
void Suprimir_node(node*&,node*&,int&);

int main(){

    node* front  {nullptr};
    node* back {nullptr};
    int data = 0,i = 0;

    do{
        std::cout<<"Ingrese el data: "<<std::endl; std::cin>>data;
        Insertar_Cola(front,back,data);
        i++;
    }while(i!=5);

    while(front != NULL){
        Suprimir_Nodo(front,back,data);

        if(front != NULL){
            std::cout<<data<<" , ";
        }else{
            std::cout<<data<<" . ";
        }
    }

    system("pause");
    return 0;
}
void Insertar_Cola(node*& front,node*& back,int data){

    node* new_node = new node();
    new_node->data = data;
    new_node->next = nullptr;

    if(Cola_Vacia(front)){
        front = new_node;
    }else{
        back->next = new_node;
    }

    back = new_node;
}
bool Cola_Vacia(node* front){
    return (front==nullptr);
}
void Suprimir_Nodo(node*& front,node*& back,int& data){

    data = front->data;
    node* aux = front;

    if(front==back){
        front = nullptr;
        back = nullptr;
    }else{
        front = front->next;
    }
    delete aux;
}