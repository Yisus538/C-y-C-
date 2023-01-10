/*Elaborar un sistema de stock, en la cual posee una pila de productos con 
los siguientes atributos: codigo, nombre, cantidad, precio lista. 
Desarrollar las siguientes funciones:
- Agregar un nuevo producto.
- Borrar el ultimo nodo de la pila.
- Mostrar el stock. 
- Descontar stock.
- Reponer stock.
*/

#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

struct product{
	int code;
	string name;
	int amount;
	float price;
};

struct node{
	struct product p;
	struct node *next;
};

/*Prototipado de funciones*/
int menu(void);
void push(struct node **, struct product);
void pop(struct node **);
void print(struct node **);
bool isempty(struct node *);
void discount(struct node **, int, int);
void replace(struct node **, int, int);

void print_pair(struct node **);

int main(int argc, char *argv[]) {
	int op=0, code=0, amount=0;
	struct node *stack_p =NULL;
	struct product p;	
	
	do{
		op=menu();
		switch(op){
			case 1:
			{
				cout<<"Ingrese un producto:\nCodigo: ";
				cin>>p.code;
				cout<<"Nombre: ";
				cin>>p.name;
				cout<<"Cantidad: ";
				cin>>p.amount;
				cout<<"Precio: ";
				cin>>p.price;
				push(&stack_p, p);
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
				cout<<"Ingrese el codigo del producto y la cantidad a descontar:\n";
				cin>>code>>amount;
				discount(&stack_p, code, amount);
				break;
			}
			case 5:
			{
				cout<<"Ingrese el codigo del producto y la cantidad a descontar:\n";
				cin>>code>>amount;
				replace(&stack_p, code, amount);
				break;
			}
		}
	} while(op<6);
	return 0;
}

int menu(void){
	int op=0;
	do{
		cout<<"--------------------------------------------\n";
		cout<<"1.- Agregar un nodo a la pila (producto)\n";
		cout<<"2.- Borrar el ultimo nodo de la pila\n";
		cout<<"3.- Imprimir pila\n";
		cout<<"4.- Descontar stock\n";
		cout<<"5.- Reponer stock\n";
		cout<<"6.- Salir\n";
		cin>>op;
		cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}
	
void push(struct node **sp, struct product p){

	struct node *new_node = NULL;
	/* Creacion de memoria*/
	new_node = (struct node*)malloc(sizeof(struct node));
	/*Verificacion de memoria disponible*/
	if(new_node==NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	/*Carga util*/
	new_node->p=p;
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
		cout<<"Impresion de la pila\n";
		cout<<"Cod.\tNombre\tCant.\tPrecio\n";
		/*Comenzamos a recorrer desde el stack pointer*/
		struct node *temp;
		temp=*(sp);
		while(temp!=NULL){
			cout<<temp->p.code<<"\t"<<temp->p.name<<"\t"<<temp->p.amount<<"\t"<<temp->p.price<<"\n";
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
		}
	}else{
		printf("Pila vacia\n");
	}
}
	
void discount(struct node **sp, int code, int amount){
	if(isempty(*sp)==false){
		struct node *temp;
		temp=*(sp);
		while(temp!=NULL){
			if(temp->p.code==code){
				temp->p.amount=temp->p.amount-amount;
			}
			temp=temp->next;
		}
	}else{
		printf("Pila vacia\n");
	}
}
			
void replace(struct node **sp, int code, int amount){
	if(isempty(*sp)==false){
		struct node *temp;
		temp=*(sp);
		while(temp!=NULL){
			if(temp->p.code==code){
				temp->p.amount=temp->p.amount+amount;
			}
			temp=temp->next;
		}
	}else{
		printf("Pila vacia\n");
	}
}
