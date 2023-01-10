/* Ingrese los lados de un triangulo y determine de que triangulo se trata. 
Si tiene todos los lados diferentes es escaleno, todos los lados iguales es 
equilatero y si tiene dos lados iguales y uno desigual es isosceles.*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int l1=0, l2=0, l3=0;
	cout<<"Ingrese los lados de un triangulo: "<<endl;
	cin>>l1>>l2>>l3;
	if(l1==l2 && l1==l3)
	{
		cout<<"Equilatero.";
	}else{
		if((l1==l2 && l1!=l3) || (l1==l3 && l1!=l2) || (l2==l3 && l2!=l1)){
			cout<<"Isosceles";
		}else{
			cout<<"Escaleno";
		}
	}
	return 0;
}
