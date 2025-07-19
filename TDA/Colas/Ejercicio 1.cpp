/*
    1. Insertar un caracter a una cola
    2. Mostrar todos los elementos de la cola
    3. Salir
*/
#include <iostream>
#include <stdlib.h>

typedef struct node{

    char data;
    node* next;

}node;

void Insertar_Cola(node*&,node*&,char);
void Mostrar(node*);
bool Cola_Vacia(node*);
void suprimir_cola(node*&,node*&,char&);

int main(){

    node* front {nullptr};
    node* back {nullptr};
    char data;
    int i = 0,opc;

    do{
        std::cout<<"\tMENU"<<std::endl;
        std::cout<<"1. Insertar un caracter a la cola.\n2. Mostrar todos los elementos de la cola.\n3. Salir\nOPCION: "<<std::endl;
        std::cin>>opc;
        if(opc!=3){
            system("cls");
        }
        switch(opc){
            case 1: 
                do{
                    std::cout<<"Ingrese el caracter: "<<std::endl; std::cin>>data;
                    Insertar_Cola(front,back,data);
                    i++;
                }while(i!=5);
                system("cls");
            break;
            case 2: std::cout<<"Mostrando elementos de la cola"<<std::endl;
                while(front != NULL){
                    suprimir_cola(front,back,data);
                    if(front != NULL){
                        std::cout<<data<<" , ";
                    }else{
                        std::cout<<data<<" . ";
                    }
                }
                std::cout<<"\n";
            break;
        }
    
    }while(opc != 3);


    system("pause");
    return 0;
}
void Insertar_Cola(node*& front,node*& back,char data){

    node* nuevo_nodo = new node();
    nuevo_nodo->data = data;
    nuevo_nodo->next = nullptr;
    

    if(Cola_Vacia(front)){
        front = nuevo_nodo;
    }else{
        back->next = nuevo_nodo;
    }
    back = nuevo_nodo;

    std::cout<<"Elemento "<<data<<" ingresado correctamente."<<std::endl;
}
bool Cola_Vacia(node* front){
    return (front == nullptr);
}
void suprimir_cola(node*& front,node*& back,char& data){

    data = front->data;
    node* aux = front;

    if(front == back){
        front = NULL;
        back = NULL;
    }else{
        front = front->next;
    }
    delete aux;

}