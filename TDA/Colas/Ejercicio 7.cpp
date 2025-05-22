/*Desarrolle un programa que cargue una cola de numeros enteros aleatorios. 
Luego realice un menu de opciones:
- Agregar un nodo a la cola. (cuando agrega un valor, el mismo no tiene que 
estar repetido en la cola)
- Borrar el primer nodo de la cola.
- Imprimir cola.
*/

#include <iostream>
#include <ctime>

typedef struct node{
	int data;
	node* link;
}node;

int menu();
void push(node**, node**, int);
void pop(node**, node** );
void print(node*);
bool check_repeated(node*, int);

int main() {
	
	node* front = nullptr;
	node* back = nullptr;
	int value=0, op=0, i=0;
	srand(time(NULL));
	
	for(i=0; i<5;i++){
		value=rand()%10+1;
		push(&front, &back, value);
	}
	do{
		op=menu();
		switch(op){
		case 1: 
			printf("Ingrese un valor:\n");
			do{
				scanf("%d", &value);
				if(check_repeated(front, value)==false){
					push(&front, &back, value);
					break;
				}else{
					printf("Valor repetido, Ingrese otro:\n");
				}
			}while(check_repeated(front, value)==true);
			break;
		case 2: 
			pop(&front, &back);
			break;
		case 3: 
			print(front);
			break;
		}
	} while(op<4);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo a la cola\n");
		printf("2.- Borrar el primer nodo de la cola\n");
		printf("3.- Imprimir cola\n");
		printf("4.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n") ;
	}while((op<1)||(op>4));
	return op;
}
	
void push(node** front, node** back, int d){
	node* temp;
	temp=new node();
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
	printf("Primer nodo borrado de la cola\n");
	free(temp);
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

bool check_repeated(node* front, int value){
	bool repeated=false;
	node* temp {nullptr};
	temp=front;
	while(temp!=nullptr){
		if(temp->data==value){
			repeated=true;
		}
		temp=temp->link;
	}
	return repeated;
}

