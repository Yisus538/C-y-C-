/*Escribir un programa que pida ingresar coordenadas (x,y) que representan 
puntos en el plano. Informar cuantos puntos se han ingresado en el primer, 
segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se 
ingrese la cantidad de puntos a procesar.*/

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int i=0, cantidad=0, x=0, y=0, cant1=0, cant2=0, cant3=0, cant4=0;
	cout<<"Ingrese la cantidad de puntos: ";
	cin>>cantidad;
	for(i=0; i<cantidad;i++){
		cout<<"\nIngrese (x, y): "<<endl;
		cin>>x>>y;
		if(x>0 && y>0){
			cout<<"El punto ("<<x<<","<<y<<") esta en el 1er plano.\n";
			cant1++;
		}else{
			if(x>0 && y<0){
			cout<<"El punto ("<<x<<","<<y<<") esta en el 2do plano.\n";
			cant2++;
			}else{
				if(x<0 && y<0){
					cout<<"El punto "<<x<<" "<<y<<" esta en el 3er plano.\n";
					cant3++;
				}else{
					cout<<"El punto ("<<x<<","<<y<<") esta en el 4to plano.\n";
					cant4++;
				}
			}
		}	
	}
	cout<<"La cantidad de puntos en el plano: \n1: "<<cant1<<"\n2: "<<cant2<<"\n3: "<<cant3<<"\n4: "<<cant4;
	return 0;
}

