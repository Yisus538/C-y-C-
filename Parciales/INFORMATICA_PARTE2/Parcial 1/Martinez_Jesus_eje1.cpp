/*1. Desarrolle un programa que guarde 20 elementos de valores enteros aleatorios 
(entre 1 y 50) en un puntero. Luego un menu de opciones con las siguientes funciones:
a. Mostrar todos los valores con su respectiva direcci�n.
b. Mostrar los valores pares.
c. Sumar los valores impares.
d. Contar las cantidad de valores que est�n entre 10 y 15.
Nota: utilice punteros y funciones para realizar este ejericio.*/


#include <iostream>
#include <time.h>

using namespace std;

static void mostrar(int*);
static void mostrar_par(int*);
static void sumar_impar(int*);
static void contar_entre(int*);


int main(int argc, char *argv[]) {
	int i=0;


	int v[20]={0}, *p{&v[0]};
	
	char op=' ', rta=' ';
	srand (time(NULL));
	
	//carga de valores
	for (i=0;i<20;i++){
		*(p+i)=rand()%50+1;
	}
	
	do{
		
		cout<<"*****************MENU DE OPCIONES*****************"<<endl;
		cout<<"a. Mostrar valores y direcciones"<<endl;
		cout<<"b. Mostrar pares"<<endl;
		cout<<"c. Sumar impares"<<endl;
		cout<<"d. Contar entre 10 y 15 inclusive"<<endl;
		cin>>op;
		cout<<"**************************************************\n\n";
		switch(op){
		case 'a': 
		case 'A': 
			mostrar(p);
			break;
		case 'b':
		case 'B':
			mostrar_par(p);
			break;
		case 'c':
		case 'C': 
			sumar_impar(p);
			break;
		case 'd':
		case 'D': 
			contar_entre(p);
			break;
		}
		cout<<"\n�Desea seguir (S/N)? ";
		cin>>rta;
		cout<<"\n\n";
	}while(rta=='s' || rta=='S');

	return 0;
}

static void mostrar(int *p){
	int i=0;
	cout<<"Posicion\tValor\tDireccion de memoria"<<endl;
	for (i=0;i<20;i++){
		cout<<i+1<<"\t\t"<<*(p+i)<<"\t"<<(p+i)<<endl;
	}
}
	
static void mostrar_par(int *p){
	int i=0;
	cout<<"Numeros pares"<<endl;
	for (i=0;i<20;i++){
		if ((*(p+i))%2==0){
			cout<<*(p+i)<<"\t";
		}
	}
}
		
static void sumar_impar(int *p){
	int i=0, sum=0;
	for (i=0;i<20;i++){
		if ((*(p+i))%2!=0){
			sum+=(*(p+i));
		}
	}
	cout<<"Suma de numeros impares: "<<sum<<endl;
}
			
static void contar_entre(int *p){
	int i=0, cont=0;
	for (i=0;i<20;i++){
		if((*(p+i))>10 && (*(p+i))<15){
			cont++;
		}
	}
	cout<<"Cantidad de numeros entre 10 y 15: "<<cont<<endl;
}

           