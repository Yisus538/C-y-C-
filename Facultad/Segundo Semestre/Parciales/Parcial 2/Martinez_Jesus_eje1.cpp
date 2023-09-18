/*LISTA

Desarrolle un programa que cree una estructura llamada remito en la cual tiene 
los siguientes atributos: n�mero, apellido, cantidad de ladrillos, peso total 
de la carga.  El peso de un ladrillo es de 0.350 kg.
Luego crear una LISTA de remitos, y cargar los datos de cada remito. 
El peso debe ser calculado por una funci�n. Una vez cargado el TDA, mostrar 
un men� de opciones con los siguientes datos:

1. Mostrar el listado de remitos.
2. Mostrar el remito con mayor carga. 
3. Buscar un remito y mostrar sus datos, en caso de que no exista mostrar 
un mensaje de error.
4. Grabar un archivo llamado remito.txt en donde se graben los siguientes 
datos, por ejemplo:

Remito		Cantidad de Ladrillos	Peso total
1			10						...	
2			15	

*/
#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;

struct remito{
	int numero;
	string apellido;
	int cant_ladrillo;
	float peso_total;
};

struct node{
	struct remito r;
	struct node *next;
};

int menu();
float calcular_peso_total(int);
void push(struct node **, struct remito);
void append(struct node **, struct remito);
void print_list(struct node *);
void mostrar_mayor_carga(struct node *);
void buscar_remito(struct node *);
void grabar_archivo(struct node *, FILE *fp);
void check_null(FILE *fp);

int main(int argc, char *argv[]) {
	
	struct node* head=nullptr;
	struct remito r;
	FILE *fp=nullptr;
	
	int op=0;
	std::cout<<"Ingreso de los datos:\n";
	
	for(int i=0; i<3; i++){
		std::cout<<"Numero: "<<i+1<<"\n";
		r.numero=i+1;
		std::cout<<"Apellido: ";
		std::cin>>r.apellido;
		std::cout<<"Cantidad de ladrillos: ";
		std::cin>>r.cant_ladrillo;
		r.peso_total=calcular_peso_total(r.cant_ladrillo);
		append(&head, r);
	}
	
	do{
		op=menu();
		switch(op){
		case 1: 
			print_list(head);
			break;
		case 2: 
			mostrar_mayor_carga(head);
			break;
		case 3: 
			buscar_remito(head);
			break;
		case 4: 
			grabar_archivo(head, fp);
			break;
		}
	} while(op<5);
	return 0;
}

int menu(void){
	int op=0;
	do{
		std::cout<<"--------------------------------------------\n";
		std::cout<<"1.- Mostrar lista de remitos\n";
		std::cout<<"2.- Mostrar el remito con mayor carga\n";
		std::cout<<"3.- Buscar un remito y mostrar sus datos\n";
		std::cout<<"4.- Grabar en archivo\n";
		std::cout<<"5.- Salir\n";
		std::cin>>op;
		std::cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}

float calcular_peso_total(int cant_ladrillo){
	return 0.350*cant_ladrillo;
}
	
void push(struct node ** head, struct remito r){
	struct node * new_node=nullptr;
	new_node = (struct node*)malloc(sizeof(struct node));
	if(new_node==nullptr){
		printf("No hay memoria disponible");
		exit(0);
	}
	new_node->r=r;
	new_node->next=(*head);
	(*head)=new_node;
}
	
void append(struct node **head, struct remito r){
	struct node* new_node = nullptr;
	new_node = (struct node*)malloc(sizeof(struct node));
	if(new_node==nullptr){
		printf("No hay memoria disponible");
		exit(0);
	}
	struct node *temp=*head;
	new_node->r=r;
	new_node->next=nullptr;
	if(*head == nullptr){
		*head=new_node;
		return;
	}
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	temp->next=new_node;
}
				
void print_list(struct node *head){
	struct node *temp=nullptr;
	temp=head;
	std::cout<<"LISTA DE REMITOS\n";
	std::cout<<"N.R.\tApellido\tC.L.\tP.T.\n";
	while(temp!=nullptr){
		std::cout<<temp->r.numero<<"\t"<<temp->r.apellido<<"\t\t"<<temp->r.cant_ladrillo<<"\t"<<temp->r.peso_total<<"\n";
		temp=temp->next;
	}
}

void mostrar_mayor_carga(struct node *head){
	struct node *temp=nullptr;
	temp=head;
	float mayor=0;
	while(temp!=nullptr){
		if(mayor<temp->r.peso_total){
			mayor=temp->r.peso_total;
		}
		temp=temp->next;
	}
	temp=head;
	std::cout<<"REMITO CON MAYOR CARGA\n";
	std::cout<<"N.R.\tApellido\tC.L.\tP.T.\n";
	while(temp!=nullptr){
		if(mayor==temp->r.peso_total){
			std::cout<<temp->r.numero<<"\t"<<temp->r.apellido<<"\t\t"<<temp->r.cant_ladrillo<<"\t"<<temp->r.peso_total<<"\n";
		}
		temp=temp->next;
	}
}
	

void buscar_remito(struct node *head){
	struct node *temp = nullptr;
	temp=head;
	int numero=0;
	bool bandera=false;
	std::cout<<"BUSCADOR\n";
	std::cout<<"Ingrese el numero ha buscar: ";
	std::cin>>numero;
	while(temp!=nullptr){
		if(temp->r.numero==numero){
			std::cout<<"Apellido: "<<temp->r.apellido<<"\n";
			std::cout<<"Cantidad de ladrillos: "<<temp->r.cant_ladrillo<<"\n";
			std::cout<<"Peso total: "<<temp->r.peso_total<<"\n";
			bandera=true;
		}
		temp=temp->next;
	}
	if(bandera==false){
		std::cout<<"No se ha encontrado el remito "<<numero<<".\n";
	}
}
		
void check_null(FILE *fp){
	if(fp==nullptr){
		printf("Imposible abrir el archivo");
		exit(1);
	}
}

void grabar_archivo(struct node *head, FILE *fp){
	fp=fopen("./remito.txt", "w");
	check_null(fp);
	
	struct node *temp = nullptr;
	temp=head;
	
	fprintf(fp,"N.R.\tC.L.\tP.T.\n");
	
	while(temp!=nullptr){
		fprintf(fp,"%d\t%d\t%0.2f\n", temp->r.numero, temp->r.cant_ladrillo, temp->r.peso_total);
		temp=temp->next;
	}
	std::cout<<"ARCHIVO GRABADO\nNombre: remito.txt\n";
	fclose(fp);
}