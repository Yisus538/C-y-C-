/*Desarrolle un programa que cargue una cola de numeros enteros aleatorios. 
Luego realice un menu de opciones:
- Agregar un nodo a la cola. (cuando agrega un valor, el mismo no tiene que 
estar repetido en la cola)
- Borrar el primer nodo de la cola.
- Imprimir cola.
*/

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
bool check_repeated(struct node *, int);

int main(int argc, char *argv[]) {
	
	struct node *front = NULL;
	struct node *back = NULL;
	int value=0, op=0, i=0;
	srand(time(NULL));
	//carga 5 elementos en la cola de manera aleatoria
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

bool check_repeated(struct node *front, int value){
	bool repeated=false;
	struct node *temp = NULL;
	temp=front;
	while(temp!=NULL){
		if(temp->data==value){
			repeated=true;
		}
		temp=temp->link;
	}
	return repeated;
}

