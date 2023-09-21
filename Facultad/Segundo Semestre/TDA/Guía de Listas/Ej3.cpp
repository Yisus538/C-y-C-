/*Crear un programa en la cual cargue una lista de 5 numeros aleatoriamente 
(entre 1 y 10), luego los muestre y muestre los valores multiples de 5.*/

#include <iostream>
#include <ctime>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {
	

	struct node* head{nullptr};
	struct node* temp{ nullptr};
	struct node *new_node{nullptr};
	
	int dato=0, i=0;
	srand(time(NULL));
	do{
		dato=rand()%50+1;
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
	if(head==nullptr){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("Lista\n");
		while(temp!=nullptr){
			printf("%d\n", temp->data);
			temp=temp->next;
		}
		
	}
	
	if(head==nullptr){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("Multiplos de 5\n");
		while(temp!=nullptr){
			if(temp->data%5==0){
				printf("%d\n", temp->data);
			}
			temp=temp->next;
		}
		
	}
	
	return 0;
}
