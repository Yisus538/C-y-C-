/*8. Crear un programa que pida al usuario los nombres, edades y alturas de 
10 jugadores. Posteriormente le presentara un menu que le permita:
a. Listar los nombres de los jugadores
b. Listar las alturas de los jugadores
c. Listar las edades de los jugadores
Utilice funciones.
*/

#include <iostream>
#define tamano 3

using namespace std;

struct jugador
{
	string nombre;
	int edad;
	float altura;
};

void cargar_jugadores(jugador [tamano]);
void mostrar_nombres(jugador[tamano]);
void mostrar_alturas(jugador[tamano]);
void mostrar_edades(jugador[tamano]);

int main(int argc, char *argv[]) {
	
	struct jugador lista[tamano];
	char op=' ', rta=' ';
	
	cargar_jugadores(lista);
	
	do{
		
		cout<<"*****************MENU DE OPCIONES*****************"<<endl;
		cout<<"a. Listar los nombres de los jugadores"<<endl;
		cout<<"b. Listar las alturas de los jugadores"<<endl;
		cout<<"c. Listar las edades de los jugadores"<<endl;
		cin>>op;
		cout<<"**************************************************\n\n";
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
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>rta;
		cout<<"\n\n";
	}while(rta=='s' || rta=='S');
	
	return 0;
}

void cargar_jugadores(jugador lista[tamano]){
	cout<<"Carga de datos"<<endl;
	for(int i=0; i<tamano; i++){
		cout<<"Nombre: ";
		cin>>lista[i].nombre;
		cout<<"Edad: ";
		cin>>lista[i].edad;
		cout<<"Altura: ";
		cin>>lista[i].altura;
	}	
	
}


void mostrar_nombres(jugador lista[tamano]){
	cout<<"Nombres de jugadores"<<endl;
	for(int i=0; i<tamano; i++){
		cout<<lista[i].nombre<<"\n";
	}	
}

void mostrar_alturas(jugador lista[tamano]){
	cout<<"Alturas de jugadores"<<endl;
	for(int i=0; i<tamano; i++){
		cout<<lista[i].altura<<"\n";
	}	
}
		
void mostrar_edades(jugador lista[tamano]){
	cout<<"Edades de jugadores"<<endl;
	for(int i=0; i<tamano; i++){
		cout<<lista[i].edad<<"\n";
	}	
}
			
	

