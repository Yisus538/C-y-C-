/*Determinar la suma de los primeros "n" numeros naturales. 
Por ejemplo: Ingresa 3. Entonces debería mostrar 1+2+3=6.*/

#include <iostream>

using namespace std;

int sumar(int);

int main(int argc, char *argv[]) {

	int num;
	cout<<"Ingrese la cantidad de numeros a sumar: ";
	cin>>num;
	
	//muestro lo numeros a sumar
	for(int i=1;i<num+1;i++){
		cout<<i;
		if(i<num)
			cout<<" + "; //lo muestra solo si hay otro numero para sumar
	}
	
	cout<<" = "<<sumar(num);
	return 0;
}

int sumar(int num){
	//caso bases
	if(num==0) 
		return 0;
	if(num==1) 
		return 1;
	else
		//caso recursivo
		return num+sumar(num-1);
}
