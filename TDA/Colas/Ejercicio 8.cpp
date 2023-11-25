/*Elaborar un sistema de stock, en la cual posee una cola de productos 
con los siguientes atributos: codigo, nombre, cantidad, precio lista. 
Desarrollar las siguientes funciones:
- Agregar un nuevo producto.
- Borrar el primer nodo de la cola.
- Mostrar el stock. 
- Descontar stock.
- Reponer stock.
*/

#include <iostream>
#include <ctime>

struct product{
	int code;
	std::string name;
	int amount;
	float price;
};

struct node{
	struct product p;
	struct node *link;
};

int menu();
void push(struct node **, struct node **, struct product);
void pop(struct node **, struct node **);
void print(struct node *);
void discount(struct node *, int, int);
void replace(struct node *, int, int);

int main(int argc, char *argv[]) {
	
	struct node* front {nullptr};
	struct node* back {nullptr};
	struct product p;
	int op=0, code=0, amount=0;
	do{
		op=menu();
		switch(op){
		case 1: 
			std::cout<<"Ingrese un producto:\nCodigo: ";
			std::cin>>p.code;
			std::cout<<"Nombre: ";
			std::cin>>p.name;
			std::cout<<"Cantidad: ";
			std::cin>>p.amount;
			std::cout<<"Precio: ";
			std::cin>>p.price;
			push(&front, &back, p);
			break;
		case 2: 
			pop(&front, &back);
			break;
		case 3: 
			print(front);
			break;
		case 4: 
			std::cout<<"Ingrese el codigo del producto y la cantidad a descontar:\n";
			std::cin>>code>>amount;
			discount(front, code, amount);
			break;
		case 5:
			std::cout<<"Ingrese el codigo del producto y la cantidad a descontar:\n";
			std::cin>>code>>amount;
			replace(front, code, amount);
			break;
		}
	} while(op<6);
	return 0;
}

int menu(void){
	int op=0;
	do{
		std::cout<<"--------------------------------------------\n";
		std::cout<<"1.- Agregar un nodo a la cola (producto)\n";
		std::cout<<"2.- Borrar el primer nodo de la cola\n";
		std::cout<<"3.- Imprimir cola\n";
		std::cout<<"4.- Descontar stock\n";
		std::cout<<"5.- Reponer stock\n";
		std::cout<<"6.- Salir\n";
		std::cin>>op;
		std::cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}
	
void push(struct node **front, struct node **back, struct product p){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==nullptr){
		std::cout<<"No hay suficiente memoria";
		exit(0);
	}
	temp->p=p;
	temp->link=nullptr;
	if(*back==nullptr){ //Insercion del primer nodo
		*back=temp;
		*front=*back;
	}else{ //Insercion del resto de los nodos
		(*back)->link =temp;
		*back=temp;
	}
}
		
void pop(struct node **front, struct node **back){
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
	free(temp);
}
			
void print(struct node *front){
	struct node *temp {nullptr};
	temp=front;
	std::cout<<"Impresion de la cola\n";
	std::cout<<"Cod.\tNombre\tCant.\tPrecio\n";
	while(temp!=nullptr){
		std::cout<<temp->p.code<<"\t"<<temp->p.name<<"\t"<<temp->p.amount<<"\t"<<temp->p.price<<"\n";
		temp=temp->link;
	}
}

void discount(struct node *front, int code, int amount){
	struct node *temp {nullptr};
	temp=front;
	while(temp!=nullptr){
		if(temp->p.code==code){
			temp->p.amount=temp->p.amount-amount;
		}
		temp=temp->link;
	}
}

void replace(struct node *front, int code, int amount){
	struct node *temp {nullptr};
	temp=front;
	while(temp!=nullptr){
		if(temp->p.code==code){
			temp->p.amount=temp->p.amount+amount;
		}
		temp=temp->link;
	}
}
