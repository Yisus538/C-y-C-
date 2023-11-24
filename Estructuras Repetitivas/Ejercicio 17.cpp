/*Escribir un programa que pida ingresar coordenadas (x,y) que representan 
puntos en el plano. Informar cuantos puntos se han ingresado en el primer, 
segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se 
ingrese la cantidad de puntos a procesar.*/

#include <iostream>

int main() {
	
	int i=0, cantidad=0, x=0, y=0, cant1=0, cant2=0, cant3=0, cant4=0;
	
	std::cout<<"Ingrese la cantidad de puntos: ";
	std::cin>>cantidad;
	
	for(i=0; i<cantidad;i++){
		std::cout<<"\nIngrese (x, y): "<<std::endl;
		std::cin>>x>>y;
		if(x>0 && y>0){
			std::cout<<"El punto ("<<x<<","<<y<<") esta en el 1er plano.\n";
			cant1++;
		}else{
			if(x>0 && y<0){
			std::cout<<"El punto ("<<x<<","<<y<<") esta en el 2do plano.\n";
			cant2++;
			}else{
				if(x<0 && y<0){
					std::cout<<"El punto "<<x<<" "<<y<<" esta en el 3er plano.\n";
					cant3++;
				}else{
					std::cout<<"El punto ("<<x<<","<<y<<") esta en el 4to plano.\n";
					cant4++;
				}
			}
		}	
	}
	std::cout<<"La cantidad de puntos en el plano: \n1: "<<cant1<<"\n2: "<<cant2<<"\n3: "<<cant3<<"\n4: "<<cant4;
	return 0;
}

