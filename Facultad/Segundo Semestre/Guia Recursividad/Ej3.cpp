/*Determinar la potencia de un numero con funciones recursivas. Ejemplo: 5 a la 3 =125*/

#include <iostream>
using namespace std;

int calcular_potencia(int,int);

int main(int argc, char *argv[]) {
	int base=0, exp=0;
	cout<<"Ingrese la base: ";
	cin>>base;
	cout<<"Ingrese el exponente: ";
	cin>>exp;
	
	cout<<"\n"<<base<<" a la "<<exp<<" es igual a "<<calcular_potencia(base,exp);
	return 0;
}

int calcular_potencia(int base,int exp){
	if(exp==0) 
		return 1;
	if(exp==1) 
		return base;
	else 
		return base*calcular_potencia(base,exp-1);
}
