/*Crear un programa en la cual cargue una cola de 5 numeros 
aleatoriamente (entre 1 y 10), luego los muestre y muestre 
los valores pares. */


#include <iostream>
#include <ctime>

using namespace std;

struct node{
	int data;
	struct node *link;
};

int menu();
void push(struct node **, struct node **, int);
void pop(struct node **, struct node **);
void print(struct node *);
void print_pair(struct node *);


int main(int argc, char *argv[]) {
	
	struct node *front = NULL;
	struct node *back = NULL;
	int value=0, op=0, i=0;
	srand(time(NULL));
	do{
		op=menu();
		switch(op){
		case 1: 
			for(i=0; i<5;i++){
				value=rand()%10+1;
				push(&front, &back, value);
			}
			printf("Valores cargados.\n");
			break;
		case 2: 
			pop(&front, &back);
			break;
		case 3: 
			print(front);
			break;
		case 4: 
			print_pair(front);
			break;
		}
	} while(op<5);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo\n");
		printf("2.- Borrar un nodo\n");
		printf("3.- Imprimir cola\n");
		printf("4.- Imprimir cola de pares\n");
		printf("5.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>5));
	return op;
}
	
void push(struct node **front, struct node **back, int d){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("No hay suficiente memoria");
		exit(0);
	}
	temp->data=d;
	temp->link=NULL;
	if(*back==NULL){ //Insercion del primer nodo
		*back=temp;
		*front=*back;
	}else{ //Insercion del resto de los nodos
		(*back)->link =temp;
		*back=temp;
	}
}
		
void pop(struct node **front, struct node **back){
	struct node *temp;
	if((*front==*back)&&(*back==NULL)){
		printf("Vacia\n");
		exit(0);
	}
	temp=*front;
	*front = (*front)->link;
	if(*back==temp){
		*back=(*back)->link;
	}
	printf("Primer nodo borrado de la cola\n");
	free(temp);
}
			
void print(struct node *front){
	struct node *temp = NULL;
	temp=front;
	printf("Impresion de la cola\n");
	while(temp!=NULL){
		printf("%d\n", temp->data);
		temp=temp->link;
	}
}
	
void print_pair(struct node *front){
	struct node *temp = NULL;
	temp=front;
	printf("Impresion de la cola de pares\n");
	while(temp!=NULL){
		if(temp->data%2==0){
			printf("%d\n", temp->data);
		}
		temp=temp->link;
	}
}
