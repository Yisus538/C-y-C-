/*Crear un programa en la cual se solicite al usuario el ingreso de 5 
valores numericos y luego muestre la lista. */

#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {
	

	struct node* head{nullptr};
	struct node* temp{nullptr};
	struct node* new_node{nullptr};

	int dato=0, i=0;
	do{
		printf("Ingrese un dato\n");
		scanf("%d", &dato);
		

		new_node = new node();//(struct node*)malloc(sizeof(struct node));

		if(new_node==nullptr){
			printf("No hay memoria disponible");
			exit(1);
		}
		
		new_node->data= {dato};
		new_node->next = {nullptr};
		
		if(head==nullptr){
			head=new_node; //? primer nodo
		}else{ //! guarden los otros nodos
			temp=head;

			while(temp->next!=nullptr){ 
				temp=temp->next;
			}
			temp->next=new_node;
		}
		i++;
	}while(i!=5);
	if(head==nullptr){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node *temp {head};
		printf("Lista\n");
		while(temp!=nullptr){
			printf("%d\n", temp->data);
			temp=temp->next;
		}
		
	}
	return 0;
}
