#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct Equipo{

    string name = " ";
    int cant_ganador = 0;
    int cant_perdidos = 0;
    int cant_empatados = 0;
    int puntaje = 0;

};

struct Node{

    struct Equipo e;
    Node *next;

};

int Menu();
void push(Node **head,struct Equipo e);
void print(Node *head);
void puntaje(Node *head);
void Nunca(Node *head);
void Grabar(Node *head);

int main(int argc,char*argv[]){

    Node *head = NULL;
    int opc = 0,tam = 0;
    struct Equipo e;

    cout<<"\n\nCuantos equipos desea ingresar?: "<<endl; cin>>tam;

        for(int i = 0; i < tam; i++){
            push(&head,e); 
        }

    do{
        opc = Menu();

        switch(opc){

            case 1: 
                print(head); 
                system("pause");
                system("cls");
            break;
            case 2: 
                puntaje(head);
                system("pause");
                system("cls");
            break;
            case 3: 
                Nunca(head);
                system("pause");
                system("cls");
            break;
            case 4: 
                Grabar(head);
                system("pause");
                system("cls");
            break;

        }

    }while(opc!=0);


    system("pause");
    return 0;
}

int Menu(){

    int opc = 0;


    printf("\tMENU DE OPCINES\n");
    printf("1. Mostrar el listado de equipos que participaron en el torneo.\n2. Mostrar el equipo ganador con su puntaje.\n");
    printf("3. Mostrar todos los equipos que nunca perdieron un partido.\n4. Grabar un archivo llamado puntaje.txt en donde se listen los datos\nOPCION: ");
    scanf(" %d", &opc);

    return opc;
}
void push(Node **head,struct Equipo e){

    Node *temp = NULL;
    Node *new_node = NULL;

    new_node = new (Node);

    cout<<"\n\nIngrese el nombre del equipo: "<<endl;
    getline(cin,e.name,'.');
    cout<<"Ingrese la cantidad de partidos ganados: "<<endl;
    cin>>e.cant_ganador;
    cout<<"Ingrese la cantidad de partidos perdidos: "<<endl;
    cin>>e.cant_perdidos;
    cout<<"Ingrese la cantidad de partidos empatados: "<<endl;
    cin>>e.cant_empatados;
    e.puntaje = (e.cant_ganador*3)+(e.cant_perdidos*(-2));

    new_node->e = e;
    new_node->next;

    if(new_node==NULL){
        cout<<"No se a podido reservar memoria.\n"<<endl;
        exit(1);
    }

    if(*head==NULL){
        *head = new_node;
    }else{

        temp = *head;

        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;

    }

}
void print(Node *head){

    Node *temp = NULL;

    if(head==NULL){
        cout<<"Lista vacia."<<endl;
        exit(1);
    }else{

        temp = head;

        cout<<"\tEquipo\tCant Ganadores\tCant Perdidos\tCant Empatados\tPuntaje"<<endl;
        while(temp!=NULL){
            cout<<"\t"<<temp->e.name<<"\t"<<temp->e.cant_ganador<<"\t"<<temp->e.cant_perdidos<<"\t"<<temp->e.cant_empatados<<"\t"<<temp->e.puntaje<<endl;
            temp = temp->next;
        }


    }

}
void puntaje(Node *head){

    Node *temp = NULL;
    int mayor = 0;

    if(head==NULL){
        cout<<"lista vacia."<<endl;
        exit(1);
    }else{

        temp = head;

        while(temp!=NULL){
            if(temp->e.puntaje>mayor){
                mayor = temp->e.puntaje;
            }
            temp = temp->next;
        }

    }

    if(head==NULL){
        cout<<"lista vacia."<<endl;
        exit(1);
    }else{
        temp = head;

        cout<<"\tEquipo\tCant Ganadores\tCant Perdidos\tCant Empatados\tPuntaje"<<endl;
        while(temp!=NULL){
            if(mayor==temp->e.puntaje){
                cout<<"\t"<<temp->e.name<<"\t"<<temp->e.cant_ganador<<"\t"<<temp->e.cant_perdidos<<"\t"<<temp->e.cant_empatados<<"\t"<<temp->e.puntaje<<endl;
            }
            temp = temp->next;
        }
    }

}
void Nunca(Node *head){

    Node *temp = NULL;

    temp = head;
        
    while(temp!=NULL){
        if(temp->e.puntaje==0){
            cout<<"\t"<<temp->e.name<<endl;             
        }
        temp = temp->next;
            
    }
}
void Grabar(Node *head){

    Node *temp = NULL;
    ofstream ptr;

    ptr.open("puntaje.txt",ios::out);

    if(ptr.fail()){
        cout<<"No se a podido abrir el archivo."<<endl;
    }

    if(head==NULL){
        cout<<"Lista vacia.";
    }else{

        temp = head;

        ptr<<"Equipo\tPuntaje"<<endl;
        while(temp!=NULL){
            ptr<<temp->e.name<<"\t"<<temp->e.puntaje<<endl;
            temp = temp->next;
        }

    }
    ptr.close();
}