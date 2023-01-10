/*Realizar un algoritmo que solicite las edades de las personas, 
y luego obtenga la edad promedio. La cantidad de personas que se 
registran se desconoce.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad=0, cant=-1, sum=0;
	float prom=0;
	cout<<"Promedio de edad [Fin = 0]: "<<endl;
	do{
		cout<<"Ingrese edad: ";
		cin>>edad;
		sum=sum+edad;
		cant++;
	}while(edad!=0);
	prom=(int)sum/cant;
	cout<<"Promedio de edad: "<<prom;
	return 0;
}

