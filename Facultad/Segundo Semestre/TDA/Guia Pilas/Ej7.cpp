/*Desarrollo un programa que cree una pila de vehiculos que pasan por un peaje, 
en la cual se deben registrar patente, cantidad de ejes, precio, 
direccion. El precio es segun la cantidad de ejes. 
(1 eje = $100, 2 ejes = $150, 3 ejes = $200 y 4 ejes o mas $300). 
La direccion es a la que se dirige el vehiculo, en este caso puede ser de Norte 
a Sur (NS) o Sur a Norte (SN). Luego, arme un menu de opciones que muestre lo siguiente: 
- Agregar un vehiculo a la pila
- Borrar el ultimo nodo de la pila.
- Mostrar todos los vehiculos. 
- Mostrar los vehiculos por direccion.
. Mostrar los vehiculos por ejes. 
*/

#include <iostream>
#include <ctime>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

struct vehicle{
	int patent;
	int amount;
	float price;
	string direction;
};

struct node{
	struct vehicle v;
	struct node *next;
};

/*Prototipado de funciones*/
int menu(void);
void push(struct node **, struct vehicle);
void pop(struct node **);
void print(struct node **);
bool isempty(struct node *);
void print_direction(struct node **);
void print_axis(struct node **);

void print_pair(struct node **);

int main(int argc, char *argv[]) {
	int op=0;
	struct node *stack_p =NULL;
	struct vehicle v;
	
	do{
		op=menu();
		switch(op){
			case 1:
			{
				cout<<"Ingrese un vehiculo:\nPatente: ";
				cin>>v.patent;
				cout<<"Cantidad de ejes: ";
				cin>>v.amount;
				switch(v.amount){
				case 1: 
					v.price=100;
					break;
				case 2: 
					v.price=150;
					break;
				case 3: 
					v.price=200;
					break;
				default: 
					v.price=300;
				}
				cout<<"Direccion [NS o SN]: ";
				cin>>v.direction;
				push(&stack_p, v);
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
				print_direction(&stack_p);
				break;
			}
			case 5:
			{
				print_axis(&stack_p);
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
		cout<<"1.- Agregar un nodo a la pila (vehiculos)\n";
		cout<<"2.- Borrar el ultimo nodo de la pila\n";
		cout<<"3.- Imprimir pila\n";
		cout<<"4.- Mostrar los vehiculos por direccion\n";
		cout<<"5.- Mostrar los vehiculos por ejes\n";
		cout<<"6.- Salir\n";
		cin>>op;
		cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}
	
void push(struct node **sp, struct vehicle v){

	struct node *new_node = NULL;
	/* Creacion de memoria*/
	new_node = (struct node*)malloc(sizeof(struct node));
	/*Verificacion de memoria disponible*/
	if(new_node==NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	/*Carga util*/
	new_node->v=v;
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
		cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
		/*Comenzamos a recorrer desde el stack pointer*/
		struct node *temp;
		temp=*(sp);
		while(temp!=NULL){
			cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
		}
	}else{
		printf("Pila vacia\n");
	}
}
	
void print_direction(struct node **sp){
	struct node *temp;
	temp=*(sp);
	cout<<"Impresion de la pila por direccion NS\n";
	cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=NULL){
		if(temp->v.direction.compare("NS")==0){
			cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	cout<<"\nImpresion de la pila por direccion SN\n";
	cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=NULL){
		if(temp->v.direction.compare("SN")==0){
			cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->next;
	}
}
		
void print_axis(struct node **sp){
	struct node *temp;
	temp=*(sp);
	cout<<"Impresion de la cola con 1 eje\n";
	cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==1){
			cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	cout<<"\nImpresion de la cola con 2 eje\n";
	cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==2){
			cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	cout<<"\nImpresion de la cola con 3 eje\n";
	cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==3){
			cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	cout<<"\nImpresion de la cola con 4 eje o mas\n";
	cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount>=4){
			cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
}
