/*Crear un programa con el siguiente menu de opciones: 
- Agregar un nodo a la cola.
- Borrar el primer nodo de la cola.
- Imprimir cola.
- Cantidad de nodos en la cola.
- Cantidades de letras mayusculas y minusculas en la cola.

El usuario cargar� la cola con letras mayusculas o minusculas. 
Nota: Las letras en ASCII mayusculas estan entre el 65 a 90 y las 
minusculas entre  97 a 122 inclusive.*/

#include <iostream>
#include <ctime>

typedef struct node{
	char data;
	node* link;
}node;

int menu();
void push(node**, node**, char);
void pop(node**, node**);
void print(node*);
int size(node*);
void counter(node*);

int main() {
	
	node* front {nullptr};
	node* back {nullptr};
	int op=0;
	char value=' ';
	
	do{
		op=menu();
		switch(op){
		case 1: 
			printf("Ingrese las letras [. para terminar la carga]:\n");
			do{
				scanf(" %c", &value);
				if(value!='.' && ((value>=65 && value<=90)||(value>=97 && value<=122))){
					push(&front, &back, value);
				}else{
					if(value=='.')
						printf("Fin de la carga.\n");
					else
						printf("No es una letra, ingrese otra:\n");
				}
			}while(value!='.');
			break;
		case 2: 
			pop(&front, &back);
			break;
		case 3: 
			print(front);
			break;
		case 4: 
			printf("Cantidad de nodos de la cola: %d\n", size(front));
			break;	
		case 5: 
			counter(front);
			break;
		}
	} while(op<6);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo a la cola\n");
		printf("2.- Borrar el primer nodo de la cola\n");
		printf("3.- Imprimir cola\n");
		printf("4.- Cantidad de nodos en la cola\n");
		printf("5.- Cantidades de letras mayusculas y minusculas en la cola\n");
		printf("6.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>6));
	return op;
}
	
void push(node** front, node** back, char c){
	node* temp;
	temp=new node();
	if(temp==nullptr){
		printf("No hay suficiente memoria");
		exit(0);
	}
	temp->data=c;
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
	delete temp;
}
			
void print(node* front){
	node* temp {nullptr};
	temp=front;
	printf("Impresion de la cola\n");
	while(temp!=nullptr){
		printf("%c\n", temp->data);
		temp=temp->link;
	}
}

int size(node* front){
	int size=0;
	node *temp {nullptr};
	temp=front;
	while(temp!=nullptr){
		size++;
		temp=temp->link;
	}
	return size;
}
	
void counter(node* front){
	int cant_may=0, cant_min=0;
	node *temp {nullptr};
	temp=front;
	while(temp!=nullptr){
		if(temp->data>=65 && temp->data<=90){
			cant_may++;
		}else{
			if(temp->data>=97 && temp->data<=122){
				cant_min++;
			}
		}
		temp=temp->link;
	}
	printf("Cantidad de mayusculas: %d\n", cant_may);
	printf("Cantidad de minuscula: %d\n", cant_min);
}
