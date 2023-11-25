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

struct vehicle{
	int patent;
	int amount;
	float price;
	std::string direction;
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

int main() {
	
	struct node *front {nullptr};
	struct node *back {nullptr};
	struct vehicle v;
	int op=0;
	do{
		op=menu();
		switch(op){
		case 1: 
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
		std::cout<<"--------------------------------------------\n";
		std::cout<<"1.- Agregar un nodo a la cola (vehiculos)\n";
		std::cout<<"2.- Borrar el primer nodo de la cola\n";
		std::cout<<"3.- Imprimir cola\n";
		std::cout<<"4.- Mostrar los vehiculos por direccion\n";
		std::cout<<"5.- Mostrar los vehiculos por ejes\n";
		std::cout<<"6.- Salir\n";
		std::cin>>op;
		std::cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}
	
void push(struct node** front, struct node** back, struct vehicle v){
	struct node *temp;
	temp=new node();
	if(temp==nullptr){
		std::cout<<"No hay suficiente memoria";
		exit(0);
	}
	temp->v=v;
	temp->link=nullptr;
	if(*back==nullptr){ 
		*back=temp;
		*front=*back;
	}else{ 
		(*back)->link =temp;
		*back=temp;
	}
}		
void pop(struct node** front, struct node** back){
	struct node *temp;
	if((*front==*back)&&(*back==nullptr)){
		std::cout<<"Vacia\n";
		exit(0);
	}
	temp=*front;
	*front = (*front)->link;
	if(*back==temp){
		*back=(*back)->link;
	}
	std::cout<<"Primer nodo borrado de la cola\n";
	delete temp;
}
			
void print(struct node* front){
	struct node *temp {nullptr};
	temp=front;
	std::cout<<"Impresion de la cola\n";
	std::cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
	while(temp!=nullptr){
		std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		temp=temp->link;
	}
}

void print_direction(struct node* front){
	struct node *temp {nullptr};
	temp=front;
	std::cout<<"Impresion de la cola por direccion NS\n";
	std::cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=nullptr){
		if(temp->v.direction.compare("NS")==0){
			std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	std::cout<<"\nImpresion de la cola por direccion SN\n";
	std::cout<<"Pat.\tCant.\tPrec.\n";
	while(temp!=nullptr){
		if(temp->v.direction.compare("SN")==0){
			std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\n";
		}
		temp=temp->link;
	}
}

void print_axis(struct node* front){
	struct node *temp {nullptr};
	temp=front;
	std::cout<<"Impresion de la cola con 1 eje\n";
	std::cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=nullptr){
		if(temp->v.amount==1){
			std::cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	std::cout<<"\nImpresion de la cola con 2 eje\n";
	std::cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=nullptr){
		if(temp->v.amount==2){
			std::cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	std::cout<<"\nImpresion de la cola con 3 eje\n";
	std::cout<<"Pat.\tPrec.\tDirec.\n";
	while(temp!=nullptr){
		if(temp->v.amount==3){
			std::cout<<temp->v.patent<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
	temp=front;
	std::cout<<"\nImpresion de la cola con 4 eje o mas\n";
	std::cout<<"Pat.\tCant.\tPrec.\tDirec.\n";
	while(temp!=nullptr){
		if(temp->v.amount>=4){
			std::cout<<temp->v.patent<<"\t"<<temp->v.amount<<"\t"<<temp->v.price<<"\t"<<temp->v.direction<<"\n";
		}
		temp=temp->link;
	}
}
	
