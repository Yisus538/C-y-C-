/*Crear un programa con el siguiente menu de opciones: 
- Agregar un nodo a la cola. (se deben agregar 5 valores)
- Borrar el primer nodo de la cola.
- Imprimir cola.
- Suma de los valores de la cola.
*/

#include <iostream>

struct node{
	int data;
	struct node* link;
};

int menu();
void push(struct node**, struct node**, int);
void pop(struct node**, struct node**);
void print(struct node*);
int add(struct node*);

int main() {
	
	struct node* front {nullptr};
	struct node* back {nullptr};
	int value=0, op=0, i=0;
	do{
		op=menu();
		switch(op){
		case 1: 
			for(i=0; i<5;i++){
				printf("Ingrese el dato a insertar\n");
				scanf("%d", &value);
				push(&front, &back, value);
			}
			break;
		case 2: 
			pop(&front, &back);
			break;
		case 3: 
			print(front);
			break;
		case 4: 
			printf("Suma: %d\n", add(front));
			break;
		}
	} while(op<5);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo a la cola\n");
		printf("2.- Borrar el primer nodo de la cola\n");
		printf("3.- Imprimir cola\n");
		printf("4.- Suma de los valores de la cola\n");
		printf("5.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>5));
	return op;
}
	
void push(struct node** front, struct node** back, int d){
	
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==nullptr){
		printf("No hay suficiente memoria");
		exit(0);
	}
	temp->data = d;
	temp->link = {nullptr};
	if(*back==nullptr){ 
		*back=temp;
		*front=*back;
	}else{ 
		(*back)->link =temp;
		*back=temp;
	}
}
		
void pop(struct node** front, struct node** back){
	struct node* temp;
	if((*front==*back)&&(*back==nullptr)){
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
void print(struct node* front){
	struct node* temp {nullptr};
	temp=front;
	printf("Impresion de la cola\n");
	while(temp!=nullptr){
		printf("%d\n", temp->data);
		temp=temp->link;
	}
}
int add(struct node* front){
	int addition=0;
	struct node *temp {nullptr};
	temp=front;
	while(temp!=nullptr){
		addition+=temp->data;
		temp=temp->link;
	}
	return addition;
}
