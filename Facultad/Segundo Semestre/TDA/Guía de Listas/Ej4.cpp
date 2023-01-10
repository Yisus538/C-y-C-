/*Crear una lista con 10 letras y luego mostrar solo las vocales.*/

#include <iostream>
using namespace std;

struct node{
	char data;
	struct node *next;
};

int main(int argc, char *argv[]) {
	
	struct node* head=NULL;
	struct node* temp= NULL;
	struct node *new_node=NULL;
	
	char dato=0, i=0;
	do{
		printf("Ingrese un dato\n");
		scanf(" %c", &dato);
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node = (struct node *) new_node;
		if(new_node==NULL){
			printf("No hay memoria disponible");
			exit(1);
		}
		new_node->data=dato;
		new_node->next=NULL;
		if(head==NULL){
			head=new_node;
		}else{
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=new_node;
		}
		i++;
	}while(i!=10);
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("\nLista completa\n");
		while(temp!=NULL){
			printf("%c\t", temp->data);
			temp=temp->next;
		}
		
	}
	
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("\nLista de vocales\n");
		while(temp!=NULL){
			if(temp->data=='a' || temp->data=='A' || 
			   temp->data=='e' || temp->data=='E' || 
			   temp->data=='i' || temp->data=='I' || 
			   temp->data=='o' || temp->data=='O' || 
			   temp->data=='u' || temp->data=='U'){
				printf("%c\t", temp->data);
			}
			temp=temp->next;
		}
		
	}
	return 0;
}
