/* Ingrese un numero y determine si es par. */
#include <iostream>
#include <stdio.h>

int main() {
	int n=0;
	std::cout<<"Ingrese un numero: ";
	std::cin>>n;
	if(n%2==0){
		std::cout<<n<<" es un numero par.";
	}
	return 0;
}
