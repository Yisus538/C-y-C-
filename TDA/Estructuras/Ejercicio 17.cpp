/*11. Un negocio de paqueteria con entregas a domicilio nos ha solicitado un 
programa para almacenar datos sobre las calles y las viviendas de su Ciudad. 

Cada calle se identificara por dos elementos: Nombre y viviendas que tiene. 

Ademas, cada vivienda estara identificada por el numero que ocupa en la calle 
y la planta. Admitiendo que la ciudad tiene 5 calles y cada calle tiene std::cinco 
viviendas, desarrollar un programa que permita al usuario: 

a.  Almacenar los datos sobre las calles y las viviendas de la ciudad.
	
b. Ver toda la informacion sobre una calle: numero y viviendas que tiene
	
Nota: Por simplicidad se admitira que los nombres de las calles no contienen 
espacios.

*/

#include <iostream>
#define MAX_CALLES 2
#define MAX_VIVIENDAS 2

struct vivienda{
	int numero;
	int planta;
};

struct calle{
	std::string nombre;
	struct vivienda v[MAX_VIVIENDAS];
};

void cargar(calle[MAX_CALLES]);
void mostrar(calle[MAX_CALLES]);

int main() {
	
	struct calle c[MAX_CALLES];
	char op=' ', rta=' ';
	
	do{
		
		std::cout<<"*****************MENU DE OPCIONES*****************"<<std::endl;
		std::cout<<"a. Cargar los datos sobre las calles y las viviendas de la ciudad. "<<std::endl;
		std::cout<<"b. Ver toda la informacion sobre una calle: numero y viviendas que tiene."<<std::endl;
		std::cin>>op;
		std::cout<<"**************************************************\n\n";
		switch(op){
		case 'a': 
		case 'A': 
			cargar(c);
			break;
		case 'b':
		case 'B':
			mostrar(c);
			break;
		}
		std::cout<<"\n¿Desea seguir (S/N)? ";
		std::cin>>rta;
		std::cout<<"\n\n";
	}while(rta=='s' || rta=='S');
	
	return 0;
}

void cargar(calle c[MAX_CALLES]){
	int i=0, j=0;
	std::cout<<"Carga de datos"<<std::endl;
	for(i=0; i<MAX_CALLES; i++){
		std::cout<<"Nombre: ";
		std::cin>>c[i].nombre;
		std::cout<<"\nViviendas: \n";
		
		for(j=0; j<MAX_VIVIENDAS;j++){
			std::cout<<"Numero: ";
			std::cin>>c[i].v[j].numero;
			std::cout<<"Planta: ";
			std::cin>>c[i].v[j].planta;
			std::cout<<"\n";
		}
	}	
}
	

void mostrar(calle c[MAX_CALLES]){
	int i=0, j=0;
	std::cout<<"\nCALLES Y VIVIENDAS DE LA CIUDAD\n"<<std::endl;
	for(i=0; i<MAX_CALLES; i++){
		std::cout<<"\nCalle: "<<c[i].nombre;
		std::cout<<"\nNum. V.\t\t\tPlanta V.\n";
		for(j=0; j<MAX_VIVIENDAS;j++){
			std::cout<<c[i].v[j].numero<<"\t\t\t"<<c[i].v[j].planta<<"\n";
		}
	}	
}
