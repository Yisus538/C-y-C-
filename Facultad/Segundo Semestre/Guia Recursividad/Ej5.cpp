/*Calcular el Maximo Comun Divisor de dos numeros. 
Ejemplo:
MCD(15,20)=5
MCD(6,9)=3
MCD(16,21)=1
*/

#include <iostream>
using namespace std;

int calcular_MCD(int, int);

int main(int argc, char *argv[]) {
	
	int n1=0, n2=0;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>n1;
	
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>n2;
	
	cout<<"\nMCD("<<n1<<","<<n2<<") = "<<calcular_MCD(n1, n2)<<endl;   

	return 0;    
}
	
int calcular_MCD(int n1, int n2){
	if(n2==0) //caso base
		return n1;
	else    //caso recursivo
		return calcular_MCD(n2,n1%n2);
}
