/*Realizar un algoritmo para determinar la cantidad de numeros 
positivo y negativos que han sido ingresados.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int pos=0, neg=0, num=0;
	cout<<"Numeros positivos y negativos [Fin = 0]:"<<endl;
	do{
		cout<<"Ingrese un numero: ";
		cin>>num;
		if(num>0 && num!=0){
			pos++;	
		}
		if(num<0 && num!=0){
			neg++;
		}
	}while(num!=0);
	cout<<"Cantidades: \nPositivos: "<<pos<<" Negativos: "<<neg;
	return 0;
}
