/*11. Un negocio de paqueteria con entregas a domicilio nos ha solicitado un 
programa para almacenar datos sobre las calles y las viviendas de su Ciudad. 

Cada calle se identificara por dos elementos: Nombre y viviendas que tiene. 

Ademas, cada vivienda estara identificada por el numero que ocupa en la calle 
y la planta. Admitiendo que la ciudad tiene 5 calles y cada calle tiene cinco 
viviendas, desarrollar un programa que permita al usuario: 

a.  Almacenar los datos sobre las calles y las viviendas de la ciudad.
	
b. Ver toda la informacion sobre una calle: numero y viviendas que tiene
	
Nota: Por simplicidad se admitira que los nombres de las calles no contienen 
espacios.

*/

#include <iostream>
#define MAX_CALLES 2
#define MAX_VIVIENDAS 2

using namespace std;

struct vivienda
{
	int numero;
	int planta;
};

struct calle
{
	string nombre;
	struct vivienda v[MAX_VIVIENDAS];
};

void cargar(calle c[MAX_CALLES]);
void mostrar(calle c[MAX_CALLES]);

int main(int argc, char *argv[]) {
	
	struct calle c[MAX_CALLES];
	char op=' ', rta=' ';
	
	do{
		
		cout<<"*****************MENU DE OPCIONES*****************"<<endl;
		cout<<"a. Cargar los datos sobre las calles y las viviendas de la ciudad. "<<endl;
		cout<<"b. Ver toda la informacion sobre una calle: numero y viviendas que tiene."<<endl;
		cin>>op;
		cout<<"**************************************************\n\n";
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
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>rta;
		cout<<"\n\n";
	}while(rta=='s' || rta=='S');
	
	return 0;
}

void cargar(calle c[MAX_CALLES]){
	int i=0, j=0;
	cout<<"Carga de datos"<<endl;
	for(i=0; i<MAX_CALLES; i++){
		cout<<"Nombre: ";
		cin>>c[i].nombre;
		cout<<"\nViviendas: \n";
		
		for(j=0; j<MAX_VIVIENDAS;j++){
			cout<<"Numero: ";
			cin>>c[i].v[j].numero;
			cout<<"Planta: ";
			cin>>c[i].v[j].planta;
			cout<<"\n";
		}
	}	
}
	

void mostrar(calle c[MAX_CALLES]){
	int i=0, j=0;
	cout<<"\nCALLES Y VIVIENDAS DE LA CIUDAD\n"<<endl;
	for(i=0; i<MAX_CALLES; i++){
		cout<<"\nCalle: "<<c[i].nombre;
		cout<<"\nNum. V.\t\t\tPlanta V.\n";
		for(j=0; j<MAX_VIVIENDAS;j++){
			cout<<c[i].v[j].numero<<"\t\t\t"<<c[i].v[j].planta<<"\n";
		}
	}	
}
