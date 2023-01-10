/*2. Desarrolle un programa que permita reservar espacio para 10 valores 
enteros, los llene con 10 valores aleatorios y los muestre. Luego, el 
programa solicita al usuario que ingrese cuántos valores enteros desea 
agregar a la lista de elementos ya generada. El programa agrega espacio 
de memoria y solicita el ingreso de los nuevos valores por teclado.
Por último, mostrar la lista resultante.*/

#include <iostream>
#include <time.h>

using namespace std;

void cargar(int *p);
void mostrar(int *p, int);
void agregar(int *p, int);

int main(int argc, char *argv[]) {
	int i=0, cant_nueva=0, *p=NULL;
	
	srand(time(NULL));
	p=(int *)malloc(10*sizeof(int));
	
	if(p==NULL) {
		cout<<"No hay memoria suficiente\n";
		exit(1);
	}else{
		cargar(p);
		
		cout<<"Listado de 10 valores:\n";
		mostrar(p, 10);
		
		cout<<"\n\n¿Cuantos valores enteros desea agregar a la lista anterior? ";
		cin>>cant_nueva;
		p=(int *)realloc(p, (cant_nueva+10)*sizeof(int));
		if(p==NULL) {
			cout<<"No hay memoria suficiente\n";
			exit(1);
		}else{
			agregar(p,cant_nueva);
			cout<<"\n\nListado completo:\n";
			mostrar(p, cant_nueva+10);
		}
	}
	free(p);
	return 0;
}

void cargar(int *p){
	for(int i=0;i<10;i++){
		*(p+i)=rand()%20+1;
	}
}
	
void mostrar(int *p, int cant){
	for(int i=0;i<cant;i++){
		cout<<*(p+i)<<"\t";
	}
}

void agregar(int *p, int cant_nueva){
	cout<<"\nIngrese los nuevos valores:\n";
	for(int i=0;i<cant_nueva;i++){
		cin>>*((p+i)+10); // 10 es la cantidad anterior
	}
}
