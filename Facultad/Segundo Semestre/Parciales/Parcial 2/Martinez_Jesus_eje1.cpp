/*LISTA

Desarrolle un programa que cree una estructura llamada remito en la cual tiene 
los siguientes atributos: número, apellido, cantidad de ladrillos, peso total 
de la carga.  El peso de un ladrillo es de 0.350 kg.
Luego crear una LISTA de remitos, y cargar los datos de cada remito. 
El peso debe ser calculado por una función. Una vez cargado el TDA, mostrar 
un menú de opciones con los siguientes datos:

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
	
	struct node* head=NULL;
	struct remito r;
	FILE *fp=NULL;
	
	int op=0;
	cout<<"Ingreso de los datos:\n";
	//ingreso de los datos de los equipos
	for(int i=0; i<3; i++){
		cout<<"Numero: "<<i+1<<"\n";
		r.numero=i+1;
		cout<<"Apellido: ";
		cin>>r.apellido;
		cout<<"Cantidad de ladrillos: ";
		cin>>r.cant_ladrillo;
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
		cout<<"--------------------------------------------\n";
		cout<<"1.- Mostrar lista de remitos\n";
		cout<<"2.- Mostrar el remito con mayor carga\n";
		cout<<"3.- Buscar un remito y mostrar sus datos\n";
		cout<<"4.- Grabar en archivo\n";
		cout<<"5.- Salir\n";
		cin>>op;
		cout<<"--------------------------------------------\n";
	}while((op<1)||(op>6));
	return op;
}

float calcular_peso_total(int cant_ladrillo){
	return 0.350*cant_ladrillo;
}
	
void push(struct node ** head, struct remito r){
	struct node * new_node=NULL;
	new_node = (struct node*)malloc(sizeof(struct node));
	if(new_node==NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	new_node->r=r;
	new_node->next=(*head);
	(*head)=new_node;
}
	
void append(struct node **head, struct remito r){
	struct node* new_node = NULL;
	new_node = (struct node*)malloc(sizeof(struct node));
	if(new_node==NULL){
		printf("No hay memoria disponible");
		exit(0);
	}
	struct node *temp=*head;
	new_node->r=r;
	new_node->next=NULL;
	if(*head == NULL){
		*head=new_node;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new_node;
}
				
void print_list(struct node *head){
	struct node *temp=NULL;
	temp=head;
	cout<<"LISTA DE REMITOS\n";
	cout<<"N.R.\tApellido\tC.L.\tP.T.\n";
	while(temp!=NULL){
		cout<<temp->r.numero<<"\t"<<temp->r.apellido<<"\t\t"<<temp->r.cant_ladrillo<<"\t"<<temp->r.peso_total<<"\n";
		temp=temp->next;
	}
}

void mostrar_mayor_carga(struct node *head){
	struct node *temp=NULL;
	temp=head;
	float mayor=0;
	while(temp!=NULL){
		if(mayor<temp->r.peso_total){
			mayor=temp->r.peso_total;
		}
		temp=temp->next;
	}
	temp=head;
	cout<<"REMITO CON MAYOR CARGA\n";
	cout<<"N.R.\tApellido\tC.L.\tP.T.\n";
	while(temp!=NULL){
		if(mayor==temp->r.peso_total){
			cout<<temp->r.numero<<"\t"<<temp->r.apellido<<"\t\t"<<temp->r.cant_ladrillo<<"\t"<<temp->r.peso_total<<"\n";
		}
		temp=temp->next;
	}
}
	

void buscar_remito(struct node *head){
	struct node *temp = NULL;
	temp=head;
	int numero=0;
	bool bandera=false;
	cout<<"BUSCADOR\n";
	cout<<"Ingrese el numero ha buscar: ";
	cin>>numero;
	while(temp!=NULL){
		if(temp->r.numero==numero){
			cout<<"Apellido: "<<temp->r.apellido<<"\n";
			cout<<"Cantidad de ladrillos: "<<temp->r.cant_ladrillo<<"\n";
			cout<<"Peso total: "<<temp->r.peso_total<<"\n";
			bandera=true;
		}
		temp=temp->next;
	}
	if(bandera==false){
		cout<<"No se ha encontrado el remito "<<numero<<".\n";
	}
}
		
void check_null(FILE *fp){
	if(fp==NULL){
		printf("Imposible abrir el archivo");
		exit(1);
	}
}

void grabar_archivo(struct node *head, FILE *fp){
	fp=fopen("./remito.txt", "w");
	check_null(fp);
	
	struct node *temp = NULL;
	temp=head;
	
	fprintf(fp,"N.R.\tC.L.\tP.T.\n");
	
	while(temp!=NULL){
		fprintf(fp,"%d\t%d\t%0.2f\n", temp->r.numero, temp->r.cant_ladrillo, temp->r.peso_total);
		temp=temp->next;
	}
	cout<<"ARCHIVO GRABADO\nNombre: remito.txt\n";
	fclose(fp);
}
