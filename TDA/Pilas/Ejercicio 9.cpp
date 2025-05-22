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

typedef struct vehicle{
	int patent;
	int amount;
	float price;
	std::string direction;
}vehicle;

typedef struct node{
	vehicle v;
	node* next;
}node;

/*Prototipado de funciones*/
int menu(void);
void push(node**,vehicle);
void pop(node**);
void print(node**);
bool isempty(node*);
void print_direction(node**);
void print_axis(node**);

void print_pair(node**);

int main() {
	int op=0;
	node* stack_p =NULL;
	vehicle v;
	
	do{
		op=menu();
		switch(op){
			case 1:
			{
				std::cout<<"Ingrese un vehiculo:\nPatente: ";
				std::cin>>v.patent;
				std::cout<<"Cantidad de ejes: ";
				std::cin>>v.amount;
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
				std::cout<<"Direccion [NS o SN]: ";
				std::cin>>v.direction;
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
		std::cout<<"--------------------------------------------\n";
		std::cout<<"1.- Agregar un nodo a la pila (vehiculos)\n";
		std::cout<<"2.- Borrar el ultimo nodo de la pila\n";
		std::cout<<"3.- Imprimir pila\n";
		std::cout<<"4.- Mostrar los vehiculos por direccion\n";
		std::cout<<"5.- Mostrar los vehiculos por ejes\n";
		std::cout<<"6.- Salir\n";
		std::cin>>op;
		std::cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}
	
void push(node **sp, vehicle v){

	node *new_node = NULL;
	/* Creacion de memoria*/
	new_node = (node*)malloc(sizeof(node));
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
	
bool isempty(node *sp){
	if(sp==NULL)
		return(true);
	else
		return(false);
}

void pop(node **sp){
	if(isempty(*sp)==false){
		node *temp=NULL;	
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

void print(node **sp){
	if(isempty(*sp)==false){
		std::cout<<"Impresion de la pila\n";
		std::cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
		/*Comenzamos a recorrer desde el stack pointer*/
		node *temp;
		temp=*(sp);
		while(temp!=NULL){
			std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
			temp=temp->next;
			/*Recordar que el ultimo nodo de la stack, en siguiente apunta a NULL*/
		}
	}else{
		printf("Pila vacia\n");
	}
}
	
void print_direction(node **sp){
	node *temp;
	temp=*(sp);
	std::cout<<"Impresion de la pila por direccion NS\n";
	std::cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=NULL){
		if(temp->v.direction.compare("NS")==0){
			std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	std::cout<<"\nImpresion de la pila por direccion SN\n";
	std::cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=NULL){
		if(temp->v.direction.compare("SN")==0){
			std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->next;
	}
}
		
void print_axis(node **sp){
	node *temp;
	temp=*(sp);
	std::cout<<"Impresion de la cola con 1 eje\n";
	std::cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==1){
			std::cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	std::cout<<"\nImpresion de la cola con 2 eje\n";
	std::cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==2){
			std::cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	std::cout<<"\nImpresion de la cola con 3 eje\n";
	std::cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==3){
			std::cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
	temp=*(sp);
	std::cout<<"\nImpresion de la cola con 4 eje o mas\n";
	std::cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount>=4){
			std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->next;
	}
}
