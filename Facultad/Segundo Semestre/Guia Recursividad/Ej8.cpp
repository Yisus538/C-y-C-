/*Obtener los numeros primos del 1 al 100. Ejemplo:
1-2-3-5-7-11-13-17-19-23-29-31-37-41-43-47-53-59-61-67-71-73-79-83-89-97*/

#include <iostream>
using namespace std;

bool esPrimo (int num, int divisor);

int main() 
{
	int divisor=1;
	cout<<"Los numeros primos son: "<< endl;
	for(int i=1;i<=100;i++){
		if (esPrimo(i, divisor)==true){
			cout<<i<<" ";
		}
		divisor=2;
	}
	return 0;
}

bool esPrimo (int num, int divisor){ 
	if(num/2<divisor){
		return true; 
	}else if (num%divisor==0){ 
		return false;
	}else{
		return esPrimo (num,divisor+1); 
	}
}
