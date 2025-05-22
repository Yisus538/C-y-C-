/*Crear un programa con el siguiente menu de opciones: 
- Agregar un nodo a la pila. (se deben agregar 5 valores)
- Borrar el ultimo nodo de la pila.
- Imprimir pila.
- Suma de los valores de la pila.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	node* next;
}node;


int menu(void);
void push(node**, int);
void pop(node**);
void print(node**);
bool isEmpty(node *);
int add(node**);
int count_nodes(node**);

int main() {
	
	int op=0, value=0, i=0;
	node* stack_p {nullptr};

	do{
		op=menu();
		switch(op){
			case 1:
			{
				printf("Ingresa los 5 numeros a la pila: \n");
				for(i=0; i<5;i++){
					scanf("%d", &value);
					push(&stack_p, value);
				}
				break;
			}
			case 2:
			{
				pop(&stack_p);
				break;
			}
			case 3:
			{
				print(&stack_p);
				break;
			}
			case 4:
			{
				printf("Suma: %d\n\n", add(&stack_p));
				break;
			}
		}
	} while(op<5);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo a la pila\n");
		printf("2.- Borrar un nodo de la pila\n");
		printf("3.- Imprimir pila\n");
		printf("4.- Suma de valores de una pila\n");
		printf("5.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>5));
	return op;
}
	
void push(node** sp, int value){
	
	node* new_node {nullptr};
	/* Creacion de memoria*/
	new_node = (node*)malloc(sizeof(node));
	
	if(new_node==NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	
	new_node->data=value;

	new_node->next=*(sp);

	*(sp)=new_node;	
}
	
bool isEmpty(node* sp){
	return (sp==nullptr);
}

void pop(node** sp){
	if(isEmpty(*sp)==false){
		node* temp{nullptr};	
		/*Asignamos en temp el stack pointer actual*/
		temp=*(sp);
		/*Asignamos al stack pointer, el valor siguiente del primer nodo*/
		*(sp)=(*sp)->next;
		/*Liberamos la memoria ocupada por el primer nodo*/
		free(temp);	
	}else{
		printf("Pila vacia\n");
	}
}

void print(node** sp){
	if(isEmpty(*sp)==false){
		printf("Pila\n");
		/*Comenzamos a recorrer desde el stack pointer*/
		node* temp;
		temp=*(sp);
		while(temp!=nullptr){
			printf("%d\n", temp->data);
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
		}
	}else{
		printf("Pila vacia\n");
	}
}

int add(node** sp){
	int suma=0;
	if(isEmpty(*sp)==false){
		/*Comenzamos a recorrer desde el stack pointer*/
		node* temp;
		temp=*(sp);
		while(temp!=nullptr){
			suma+=temp->data;
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
		}
	}else{
		printf("Pila vacia\n");
	}
	return suma;
}
int count_nodes(node** sp){
	int acum=0;
	if(isEmpty(*sp)==false){
		node* temp;
		temp=(*sp);
		while(temp!=nullptr){
			acum+=1;
			temp=temp->next;
		}
	}else{
		printf("Pila vacia\n");
	}
	return (acum);
}
