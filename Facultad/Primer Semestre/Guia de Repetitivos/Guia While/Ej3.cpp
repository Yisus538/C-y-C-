/*Ingresar N cantidad de notas hasta que ingrese N=0, luego se 
pide crear un menu de opciones con los siguientes datos: 
a. Nota mayor y menor.
b. Cantidad de evaluaciones aprobadas (mayor o igual a 4), y 
cantidad de evaluaciones desaprobadas (menor a 4)
c. Promedio general.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char op=' ';
	int cant=0, cant_apro=0, cant_des=0;
	float n=-1, max=0, min=0, sum=0, prom=0;
	
	while(n!=0){
		cout<<"Ingrese una nota (Fin=0): ";
		cin>>n;
		if(n!=0){
			sum=sum+n;
			if(n>=4)
				cant_apro++;
			else
				cant_des++;
			if(cant==0){
				max=n;
				min=n;
			}else{
				if(n>max)
					max=n;
				if(n<min)
					min=n;
			}
			cant++;   
		}
	}
	
	while(op!='s'){
		cout<<"\nSeleccione una opcion (Salir = 's'): "<<endl;
		cout<<"a. Nota mayor y menor.\nb. Cant. Aprobadas y Desaprobados.\nc. Promedio General."<<endl;
		cin>>op;

		switch(op){
			case 'a': 
				cout<<"Nota mayor: "<<max<<" Nota menor: "<<min<<endl;
				break;
			case 'b': 
				cout<<"Cant. Aprobados: "<<cant_apro<<" Cant.Desaprobados: "<<cant_des<<endl;
				break;
			case 'c': 
				prom=sum/cant;
				cout<<"Promedio general: "<<prom<<endl;
				break;
			case 's':
				cout<<"Fin."<<endl;
				break;
		}//cierre switch
	}//cierre while
		
	return 0;
}

