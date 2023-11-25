/*8. Crear un programa que pida al usuario los nombres, edades y alturas de 
10 jugadores. Posteriormente le presentara un menu que le permita:
a. Listar los nombres de los jugadores
b. Listar las alturas de los jugadores
c. Listar las edades de los jugadores
Utilice funciones.
*/

#include <iostream>
#define tamano 3

struct jugador{
	std::string nombre;
	int edad;
	float altura;
};

void cargar_jugadores(jugador [tamano]);
void mostrar_nombres(jugador[tamano]);
void mostrar_alturas(jugador[tamano]);
void mostrar_edades(jugador[tamano]);

int main() {
	
	struct jugador lista[tamano];
	char op=' ', rta=' ';
	
	cargar_jugadores(lista);
	
	do{
		
		std::cout<<"*****************MENU DE OPCIONES*****************"<<std::endl;
		std::cout<<"a. Listar los nombres de los jugadores"<<std::endl;
		std::cout<<"b. Listar las alturas de los jugadores"<<std::endl;
		std::cout<<"c. Listar las edades de los jugadores"<<std::endl;
		std::cin>>op;
		std::cout<<"**************************************************\n\n";
		switch(op){
		case 'a': 
		case 'A': 
			mostrar_nombres(lista);
			break;
		case 'b':
		case 'B':
			mostrar_alturas(lista);
			break;
		case 'c':
		case 'C': 
			mostrar_edades(lista);
			break;
		}
		std::cout<<"\n¿Desea seguir (S/N)? ";
		std::cin>>rta;
		std::cout<<"\n\n";
	}while(rta=='s' || rta=='S');
	
	return 0;
}

void cargar_jugadores(jugador lista[tamano]){
	std::cout<<"Carga de datos"<<std::endl;
	for(int i=0; i<tamano; i++){
		std::cout<<"Nombre: ";
		std::cin>>lista[i].nombre;
		std::cout<<"Edad: ";
		std::cin>>lista[i].edad;
		std::cout<<"Altura: ";
		std::cin>>lista[i].altura;
	}	
	
}


void mostrar_nombres(jugador lista[tamano]){
	std::cout<<"Nombres de jugadores"<<std::endl;
	for(int i=0; i<tamano; i++){
		std::cout<<lista[i].nombre<<"\n";
	}	
}

void mostrar_alturas(jugador lista[tamano]){
	std::cout<<"Alturas de jugadores"<<std::endl;
	for(int i=0; i<tamano; i++){
		std::cout<<lista[i].altura<<"\n";
	}	
}
		
void mostrar_edades(jugador lista[tamano]){
	std::cout<<"Edades de jugadores"<<std::endl;
	for(int i=0; i<tamano; i++){
		std::cout<<lista[i].edad<<"\n";
	}	
}
			
	

