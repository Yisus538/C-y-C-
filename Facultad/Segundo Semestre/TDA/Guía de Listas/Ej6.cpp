/*Crear un programa en la cual cargue una lista de 5 numeros aleatoriamente (entre 1 y 10), 
luego los muestre los todos los valores. Finalmente borre un valor y vuelva a mostrar 
la lista resultante. */

#include <iostream>
#include <string.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {
	
	struct node* head=NULL;
	struct node* temp= NULL;
	struct node *new_node=NULL;
	srand(time(NULL));
	int dato=0, i=0;
	do{
		dato=rand()%10+1;
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
	}while(i!=5);
	temp=head;
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("\nLista completa\n");
		while(temp!=NULL){
			printf("%d\t", temp->data);
			temp=temp->next;
		}
		
	}
	
	temp=head;
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		struct node* prev=NULL;
		struct node* current=NULL;
		printf("\nIngrese el dato a borrar\n");
		scanf("%d",&dato);
		if(dato==head->data){
			temp=head;
			head=head->next;
			free(temp);
		}else{
			prev=head;
			current=head->next;
			while(current!=NULL and current->data!=dato){
				prev=current;
				current=current->next;
			}
			if(current!=NULL){
				temp=current;
				prev->next = current->next;
				free(temp);
			}
		}
	}
	
	temp=head;
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("\nLista completa\n");
		while(temp!=NULL){
			printf("%d\t", temp->data);
			temp=temp->next;
		}
		
	}

	return 0;
}
