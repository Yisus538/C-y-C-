/*Crear un programa con el siguiente menu de opciones: 
- Agregar un nodo a la pila.
- Borrar el ultimo nodo de la pila.
- Imprimir pila.
- Cantidad de nodos en la pila.
- Cantidades de letras mayusculas y minusculas en la pila.

El usuario cargara la pila con letras mayusculas o minusculas. 
Nota: Las letras en ASCII mayusculas estan entre el 65 a 90 y 
las minusculas entre  97 a 122 inclusive.
*/
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char data;
	node* next;
}node;

/*Prototipado de funciones*/
int menu(void);
void push(node**, char);
void pop(node**);
void print(node**);
bool isempty(node*);
int size(node**);
void counter(node**);

void print_pair(node**);

int main() {
	int op=0;
	char value=' ';
	node* stack_p {nullptr};
	srand(time(NULL));
	do{
		op=menu();
		switch(op){
			case 1:
			{
				printf("Ingrese las letras [. para terminar la carga]:\n");
				do{
					scanf(" %c", &value);
					if(value!='.' && ((value>=65 && value<=90)||(value>=97 && value<=122))){
						push(&stack_p, value);
					}else{
						if(value=='.')
							printf("Fin de la carga.\n");
						else
							printf("No es una letra, ingrese otra:\n");
					}
				}while(value!='.');
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
				counter(&stack_p);
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
		printf("5.- Cantidad de mayusculas y cantidad de minusculas\n");
		printf("6.- Salir\n");
		scanf("%d", &op);
		printf("--------------------------------------------\n");
	}while((op<1)||(op>6));
	return op;
}
	
void push(node** sp, char value){

	node* new_node {nullptr};
	/* Creacion de memoria*/
	new_node = new node();
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
	if(sp==nullptr)
		return(true);
	else
		return(false);
}

void pop(node** sp){
	if(isempty(*sp)==false){
		node* temp=NULL;	
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
		while(temp!=NULL){
			printf("%c\n", temp->data);
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
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
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
		}
	}else{
		printf("Pila vacia\n");
	}
	return size;
}

void counter(node** sp){
	int cant_may=0, cant_min=0;
	if(isempty(*sp)==false){
		/*Comenzamos a recorrer desde el stack pointer*/
		node* temp;
		temp=*(sp);
		while(temp!=nullptr){
			if(temp->data>=65 && temp->data<=90){
				cant_may++;
			}else{
				if(temp->data>=97 && temp->data<=122){
					cant_min++;
				}
			}
			temp=temp->next;
		}
		printf("Cantidad de mayusculas: %d\n", cant_may);
		printf("Cantidad de minuscula: %d\n", cant_min);
	}else{
		printf("Pila vacia\n");
	}
}
