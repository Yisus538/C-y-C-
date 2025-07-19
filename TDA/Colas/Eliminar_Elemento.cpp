#include <iostream>
#include <stdlib.h>

typedef struct node{

    int data;
    node* next;

}node;

void Insertar_Cola(node*&,node*&,int);
bool cola_vacia(node*);
void Suprimir_Cola(node*&,node*&,int &);


int main(){

    node* front  {nullptr};
    node* back {nullptr};
    int data,i = 0;

    do{
        std::cout<<"Ingrese un data: "<<std::endl; std::cin>>data;
        Insertar_Cola(front,back,data);
        i++;
    }while(i!=5);

 
    while(front != nullptr){
     
        Suprimir_Cola(front,back,data);

        if(front != nullptr){
            std::cout<<data<<" , ";
        }else{
            std::cout<<data<<" . ";
        }
    }

    system("pause");
    return 0;
}
void Insertar_Cola(node*& front,node*& back,int data){

    node* nuevo_node = new node();
    nuevo_node->data = data;
    nuevo_node->next = nullptr;

    if(cola_vacia(front)){
        front = nuevo_node;
    }else{
        back->next = nuevo_node;
    }
    back = nuevo_node;
    std::cout<<"El Elemento "<<data<<" a sido ingresado."<<std::endl;

}
bool cola_vacia(node* front){
    return (front == nullptr);
}
void Suprimir_Cola(node*& front,node* &back,int& data){

    data = front->data;
    node* aux = front;

    if(front == back){
        front = nullptr;
        back = nullptr;
    }else{
        front = front->next;
    }
    delete aux;
    
}