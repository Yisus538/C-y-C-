/*Ingresar una palabra y determinar si es palindroma o no. (Un palindromo es 
una palabra, numero o frase que se lee igual hacia adelante que hacia atras. 
Si se trata de un numero, se llama capicua. Ejemplo: Neuquen)*/

#include <iostream>
#include<string.h>
using namespace std;

int palindroma(char[],int, int);

int main(int argc, char *argv[]) {

	char palabra[50];
	int tamano=0;
	cout<<"Ingrese una palabra: ";
	cin.getline(palabra,50);
	tamano=strlen(palabra);

	if(palindroma(palabra,0,tamano-1)==1)
		cout<<"\nES palindroma";
	else 
		cout<<"\n\nNO es palindroma";
	
	return 0;
}

int palindroma(char palabra[],int ini, int fin){
	
	if(palabra[ini] == palabra[fin]){
		palindroma(palabra, ini+1, fin-1);
		return 1;
	}
	else{
		return 0;
	}
}
