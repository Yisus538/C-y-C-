/*Crear un programa en la cual cargue una pila de 5 numeros aleatoriamente 
(entre 1 y 10), luego los muestre y muestre los valores pares.
*/

#include <ctime>
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
bool isempty(node*);
void print_pair(node**);

int main() {
	int op=0, value=0, i=0;
	node* stack_p {nullptr};
	srand(time(NULL));
	do{
		op=menu();
		switch(op){
			case 1:
			{
				for(i=0; i<5;i++){
					value=rand()%10+1;
					push(&stack_p, value);
				}
				printf("Valores cargados.\n");
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
				print_pair(&stack_p);
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
		printf("4.- Imprimir los pares de la pila\n");
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
	/*Verificacion de memoria disponible*/
	if(new_node==nullptr){
		printf("No hay memoria disponible");
		exit(0);
	}
	/*Carga util*/
	new_node->data=value;
	/*Asignamos el siguiente del nuevo nodo al stack pointer actual*/
	new_node->next=*(sp);
	/*Ahora el nuevo nodo es el stackptr*/
	*(sp)=new_node;	
}
	
bool isempty(node* sp){
	return (sp==nullptr);
}

void pop(node** sp){
	if(isempty(*sp)==false){
		node* temp=nullptr;	
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
	if(isempty(*sp)==false){
		printf("Pila\n");
		/*Comenzamos a recorrer desde el stack pointer*/
		node* temp;
		temp=*(sp);
		while(temp!=nullptr){
			printf("%d\n", temp->data);
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a nullptr*/
		}
	}else{
		printf("Pila vacia\n");
	}
}

void print_pair(node** sp){
	if(isempty(*sp)==false){
		printf("Impresion de pares de la pila\n");
		/*Comenzamos a recorrer desde el stack pointer*/
		node* temp;
		temp=*(sp);
		while(temp!=nullptr){
			if(temp->data%2==0){
				printf("%d\n", temp->data);
			}
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a nullptr*/
		}
	}else{
		printf("Pila vacia\n");
	}
}
