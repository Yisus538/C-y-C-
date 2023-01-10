/*2. Crear un programa en la cual se solicite al usuario el ingreso de 5 
valores numericos. Luego muestre la lista y calcule el promedio de ellos. */

#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {
	
	/*puntero al comienzo de la lista*/
	struct node* head=NULL;
	struct node* temp= NULL;
	struct node *new_node=NULL;
	/*Asignacion del dato al nuevo nodo */
	int dato=0, i=0;
	do{
		printf("Ingrese un dato\n");
		scanf("%d", &dato);
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node = (struct node *) new_node;
		if(new_node==NULL){
			printf("No hay memoria disponible");
			exit(1);
		}
		new_node->data=dato;/*como va al final de la lista este nodo apunta a NULL*/
		new_node->next=NULL;/*Si la lista esta vacia, el nodo ingresado es el primero de la lista*/
		if(head==NULL){
			head=new_node;
		}else{/*Buscamos cual es el ultimo*/
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}/*Hacemos que el que era ultimo apunte al nuevo nodo*/
			temp->next=new_node;
		}
		i++;
	}while(i!=5);
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("Lista\n");
		while(temp!=NULL){
			printf("%d\n", temp->data);
			temp=temp->next;
		}
		
	}
	
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		int sum=0;
		while(temp!=NULL){
			sum+=temp->data;
			temp=temp->next;
		}
		printf("Promedio: %f\n",(float)sum/(float)5);
	}
	
	return 0;
}
