#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{

    int data;
    Node *next;

};


void push(Node **head,int dato);

int main(int argc,char**argv){

    Node *head = NULL;
    int dato = 0;


    cout<<"Ingrese un dato: "<<endl; cin>>dato;
    push(&head,dato);

    system("pause");
    return 0;
}
void push(Node **head,int dato){

    Node *new_node = new Node();
    new_node->data = dato;
    new_node->next  = *(head);
    *(head) = new_node;

    cout<<"El elemento "<<dato<<" a sido ingresado correctamente."<<endl;

    system("pause");
    system("cls");


}