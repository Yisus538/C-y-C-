/* Ingrese un numero y determine si es par. */
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n=0;
	cout<<"Ingrese un numero: ";
	cin>>n;
	if(n%2==0){
		cout<<n<<" es un numero par.";
	}
	return 0;
}
