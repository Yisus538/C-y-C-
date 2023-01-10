/*Desarrollo un programa que cree una cola de vehiculos que pasan por un peaje, 
en la cual se deben registrar patente, cantidad de ejes, precio, 
direccion. El precio es segun la cantidad de ejes. 
(1 eje = $100, 2 ejes = $150, 3 ejes = $200 y 4 ejes o mas $300). 
La direccion es a la que se dirige el vehiculo, en este caso puede ser de Norte 
a Sur (NS) o Sur a Norte (SN). Luego, arme un menu de opciones que muestre lo siguiente: 
- Agregar un vehiculo a la cola
- Borrar el primer nodo de la cola.
- Mostrar todos los vehiculos. 
- Mostrar los vehiculos por direccion.
. Mostrar los vehiculos por ejes. 
*/

#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

struct vehicle{
	int patent;
	int amount;
	float price;
	string direction;
};

struct node{
	struct vehicle v;
	struct node *link;
};

int menu();
void push(struct node **, struct node **, struct vehicle);
void pop(struct node **, struct node **);
void print(struct node *);
void print_direction(struct node *);
void print_axis(struct node *);

int main(int argc, char *argv[]) {
	
	struct node *front = NULL;
	struct node *back = NULL;
	struct vehicle v;
	int op=0;
	do{
		op=menu();
		switch(op){
		case 1: 
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
			push(&front, &back, v);
			break;
		case 2: 
			pop(&front, &back);
			break;
		case 3: 
			print(front);
			break;
		case 4: 
			print_direction(front);
			break;
		case 5:
			print_axis(front);
			break;
		}
	} while(op<6);
	return 0;
}

int menu(void){
	int op=0;
	do{
		cout<<"--------------------------------------------\n";
		cout<<"1.- Agregar un nodo a la cola (vehiculos)\n";
		cout<<"2.- Borrar el primer nodo de la cola\n";
		cout<<"3.- Imprimir cola\n";
		cout<<"4.- Mostrar los vehiculos por direccion\n";
		cout<<"5.- Mostrar los vehiculos por ejes\n";
		cout<<"6.- Salir\n";
		cin>>op;
		cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}
	
void push(struct node **front, struct node **back, struct vehicle v){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"No hay suficiente memoria";
		exit(0);
	}
	temp->v=v;
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
		cout<<"Vacia\n";
		exit(0);
	}
	temp=*front;
	*front = (*front)->link;
	if(*back==temp){
		*back=(*back)->link;
	}
	cout<<"Primer nodo borrado de la cola\n";
	free(temp);
}
			
void print(struct node *front){
	struct node *temp = NULL;
	temp=front;
	cout<<"Impresion de la cola\n";
	cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		temp=temp->link;
	}
}

void print_direction(struct node *front){
	struct node *temp = NULL;
	temp=front;
	cout<<"Impresion de la cola por direccion NS\n";
	cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=NULL){
		if(temp->v.direction.compare("NS")==0){
			cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	cout<<"\nImpresion de la cola por direccion SN\n";
	cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=NULL){
		if(temp->v.direction.compare("SN")==0){
			cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->link;
	}
}

void print_axis(struct node *front){
	struct node *temp = NULL;
	temp=front;
	cout<<"Impresion de la cola con 1 eje\n";
	cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==1){
			cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	cout<<"\nImpresion de la cola con 2 eje\n";
	cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==2){
			cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	cout<<"\nImpresion de la cola con 3 eje\n";
	cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount==3){
			cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	cout<<"\nImpresion de la cola con 4 eje o mas\n";
	cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
	while(temp!=NULL){
		if(temp->v.amount>=4){
			cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
}
	
