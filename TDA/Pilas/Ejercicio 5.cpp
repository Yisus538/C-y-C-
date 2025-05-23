/*Crear un programa con el siguiente menu de opciones: 
- Agregar un nodo a la pila. (se deben agregar 5 valores)
- Borrar el ulltimo nodo de la pila.
- Imprimir pila.
- Tama�o de la pila
- Mostrar el ultimo valor de la pila
*/
#include <ctime>
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	node* next;
};

/*Prototipado de funciones*/
int menu(void);
void push(node**, int);
void pop(node**);
void print(node**);
bool isempty(node*);
int size(node**);
void top(node**);
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
				printf("El tama�o de la pila: %d\n", size(&stack_p));
				break;
			}
			case 5:
			{
				top(&stack_p);
				break;
			}
		}
	} while(op<6);
	return 0;
}

int menu(void){
	int op=0;
	do{
		printf("--------------------------------------------\n");
		printf("1.- Agregar un nodo a la pila\n");
		printf("2.- Borrar un nodo de la pila\n");
		printf("3.- Imprimir pila\n");
		printf("4.- Tama�o de la pila\n");
		printf("5.- Ultimo valor de la pila\n");
		printf("6.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>6));
	return op;
}
	
void push(node** sp, int value){

	node* new_node = nullptr;
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

int size(node** sp){
	int size=0;
	if(isempty(*sp)==false){
		/*Comenzamos a recorrer desde el stack pointer*/
		node* temp;
		temp=*(sp);
		while(temp!=nullptr){
			size++;
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a nullptr*/
		}
	}else{
		printf("Pila vacia\n");
	}
	return size;
}

void top(node** sp){
	if(isempty(*sp)==false){
		struct node *temp;
		temp=*(sp);
		printf("El ultimo valor de la pila es: %d\n",temp->data); 
	}else{
		printf("Pila vacia\n");
	}
}
