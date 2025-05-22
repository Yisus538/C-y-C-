/*Crear un programa en la cual cargue una lista de 5 numeros aleatoriamente (entre 1 y 10), 
luego los muestre los todos los valores. Finalmente borre un valor y vuelva a mostrar 
la lista resultante. */

#include <iostream>
#include <string.h>
#include <ctime>

typedef struct node{
	int data;
	struct node *next;
}node;

int main() {
	
	node* head{nullptr};
	node* temp{nullptr};
	node* new_node{nullptr};
	srand(time(NULL));
	int dato=0, i=0;
	do{
		dato=rand()%10+1;
		new_node = new node();

		if(new_node==nullptr){
			printf("No hay memoria disponible");
			exit(1);
		}
		new_node->data=dato;
		new_node->next=nullptr;
		if(head==nullptr){
			head=new_node;
		}else{
			temp=head;
			while(temp->next!=nullptr){
				temp=temp->next;
			}
			temp->next=new_node;
		}
		i++;
	}while(i!=5);
	temp=head;
	if(head==nullptr){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("\nLista completa\n");
		while(temp!=nullptr){
			printf("%d\t", temp->data);
			temp=temp->next;
		}
		
	}
	
	temp=head;
	if(head==nullptr){
		printf("Lista vacia\n");
		exit(1);
	}else{
		struct node* prev=nullptr;
		struct node* current=nullptr;
		printf("\nIngrese el dato a borrar\n");
		scanf("%d",&dato);
		if(dato==head->data){
			temp=head;
			head=head->next;
			free(temp);
		}else{
			prev=head;
			current=head->next;
			while(current!=nullptr and current->data!=dato){
				prev=current;
				current=current->next;
			}
			if(current!=nullptr){
				temp=current;
				prev->next = current->next;
				free(temp);
			}
		}
	}
	
	temp=head;
	if(head==nullptr){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("\nLista completa\n");
		while(temp!=nullptr){
			printf("%d\t", temp->data);
			temp=temp->next;
		}
		
	}

	return 0;
}
