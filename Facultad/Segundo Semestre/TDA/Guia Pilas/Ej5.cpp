/*Desarrolle un programa que cargue una pila de numeros enteros 
aleatorios.  Luego realice un menu de opciones:
- Agregar un nodo a la pila. (cuando agrega un valor, el mismo no 
tiene que estar repetido en la pila)
- Borrar el ultimo nodo de la pila.
- Imprimir pila.
*/

#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

struct node{
	int data;
	struct node *next;
};

/*Prototipado de funciones*/
int menu(void);
void push(struct node **, int);
void pop(struct node **);
void print(struct node **);
bool isempty(struct node *);
bool check_repeated(struct node **, int);

void print_pair(struct node **);

int main(int argc, char *argv[]) {
	int op=0, value=0, i=0;
	struct node *stack_p =NULL;
	srand(time(NULL));
	for(i=0; i<5;i++){
		value=rand()%10+1;
		push(&stack_p, value);
	}
	do{
		op=menu();
		switch(op){
			case 1:
			{
				printf("Ingrese un valor:\n");
				do{
					scanf("%d", &value);
					if(check_repeated(&stack_p, value)==false){
						push(&stack_p, value);
						break;
					}else{
						printf("Valor repetido, Ingrese otro:\n");
					}
				}while(check_repeated(&stack_p, value)==true);
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
		}
	} while(op<4);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo a la pila\n");
		printf("2.- Borrar un nodo de la pila\n");
		printf("3.- Imprimir pila\n");
		printf("4.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>4));
	return op;
}
	
void push(struct node **sp, int value){

	struct node *new_node = NULL;
	/* Creacion de memoria*/
	new_node = (struct node*)malloc(sizeof(struct node));
	/*Verificacion de memoria disponible*/
	if(new_node==NULL){
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
	
bool isempty(struct node *sp){
	if(sp==NULL)
		return(true);
	else
		return(false);
}

void pop(struct node **sp){
	if(isempty(*sp)==false){
		struct node *temp=NULL;	
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

void print(struct node **sp){
	if(isempty(*sp)==false){
		printf("Pila\n");
		/*Comenzamos a recorrer desde el stack pointer*/
		struct node *temp;
		temp=*(sp);
		while(temp!=NULL){
			printf("%d\n", temp->data);
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
		}
	}else{
		printf("Pila vacia\n");
	}
}

bool check_repeated(struct node **sp, int value){
	bool repeated=false;
	if(isempty(*sp)==false){
		/*Comenzamos a recorrer desde el stack pointer*/
		struct node *temp;
		temp=*(sp);
		while(temp!=NULL){
			if(temp->data==value){
				repeated=true;
			}
			temp=temp->next;
		}
	}else{
		printf("Pila vacia\n");	
	}
	return repeated;
}

