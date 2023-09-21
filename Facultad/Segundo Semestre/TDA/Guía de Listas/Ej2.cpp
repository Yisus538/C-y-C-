/*2. Crear un programa en la cual se solicite al usuario el ingreso de 5 
valores numericos. Luego muestre la lista y calcule el promedio de ellos. */

#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {
	

	struct node* head{nullptr};
	struct node* temp{nullptr};
	struct node *new_node{nullptr};

	int dato=0, i=0;
	do{
		printf("Ingrese un dato\n");
		scanf("%d", &dato);
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
		node*temp {head};
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
		node*temp {head};
		int sum=0;
		while(temp!=nullptr){
			sum+=temp->data;
			temp=temp->next;
		}
		printf("Promedio: %f\n",(float)sum/5);
	}
	
	return 0;
}
