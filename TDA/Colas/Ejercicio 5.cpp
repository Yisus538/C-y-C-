/*Desarrolle un programa que cargue una cola de numeros enteros aleatorios 
y muestre. Luego arme una funcion que muestre el tamaño de la cola y otra 
funcion que muestre el valor del frente de la cola.*/

#include <iostream>
#include <ctime>

typedef struct node{
	int data;
	node* link;
};

int menu();
void push(node**, node**, int);
void pop(node**, node**);
void print(node*);
int size(node*);

int main() {
	
	node* front {nullptr};
	node* back {nullptr};	
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
			printf("Tama�o de la cola: %d\n", size(front));
			break;
		case 5: 
			printf("Valor del frente de la cola: %d\n",front->data);
			break;
		}
	} while(op<6);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo\n");
		printf("2.- Borrar un nodo\n");
		printf("3.- Imprimir cola\n");
		printf("4.- Tama�o de la cola\n");
		printf("5.- Valor del frente de la cola\n");
		printf("6.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>6));
	return op;
}
	
void push(node** front, node** back, int d){
	node* temp;
	temp = new node();
	if(temp==nullptr){
		printf("No hay suficiente memoria");
		exit(0);
	}
	temp->data=d;
	temp->link=nullptr;
	if(*back==nullptr){ 
		*back=temp;
		*front=*back;
	}else{ 
		(*back)->link =temp;
		*back=temp;
	}
}
		
void pop(node** front, node** back){
	node* temp;
	if((*front==*back)&&(*back==nullptr)){
		printf("Vacia\n");
		exit(0);
	}
	temp=*front;
	*front = (*front)->link;
	if(*back==temp){
		*back=(*back)->link;
	}
	delete temp;
}
			
void print(node* front){
	node* temp {nullptr};
	temp=front;
	printf("Impresion de la cola\n");
	while(temp!=nullptr){
		printf("%d\n", temp->data);
		temp=temp->link;
	}
}
	
int size(node* front){
	int size=0;
	node* temp {nullptr};
	temp=front;
	while(temp!=nullptr){
		size++;
		temp=temp->link;
	}
	return size;
}
