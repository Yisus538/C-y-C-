/*Ingresar N cantidad de notas hasta que ingrese N=0, luego se 
pide crear un menu de opciones con los siguientes datos: 
a. Nota mayor y menor.
b. Cantidad de evaluaciones aprobadas (mayor o igual a 4), y 
cantidad de evaluaciones desaprobadas (menor a 4)
c. Promedio general.*/
#include <iostream>

int main() {
	
	char op=' ';
	int cant=0, cant_apro=0, cant_des=0;
	float n=-1, max=0, min=0, sum=0, prom=0;
	
	while(n!=0){
		std::cout<<"Ingrese una nota (Fin=0): ";
		std::cin>>n;
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
		std::cout<<"\nSeleccione una opcion (Salir = 's'): "<<std::endl;
		std::cout<<"a. Nota mayor y menor.\nb. Cant. Aprobadas y Desaprobados.\nc. Promedio General."<<std::endl;
		std::cin>>op;

		switch(op){
			case 'a': 
				std::cout<<"Nota mayor: "<<max<<" Nota menor: "<<min<<std::endl;
				break;
			case 'b': 
				std::cout<<"Cant. Aprobados: "<<cant_apro<<" Cant.Desaprobados: "<<cant_des<<std::endl;
				break;
			case 'c': 
				prom=sum/cant;
				std::cout<<"Promedio general: "<<prom<<std::endl;
				break;
			case 's':
				std::cout<<"Fin."<<std::endl;
				break;
		}//cierre switch
	}//cierre while
		
	return 0;
}

