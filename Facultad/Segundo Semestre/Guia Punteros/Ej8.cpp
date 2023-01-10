/*Desarrollar un programa que declare e inicialice un vector tipo 
char con el abecedario. Luego mostrar en pantalla el abecedario 
en mayuscula y minuscula, utilizando punteros. Nota: la funcion 
para pasar a mayuscula es toupper() y a minusculas es tolower().  
Ejemplo: cadena[i] = tolower(cadena[i]); En codigo ASCII A=65

*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//char abc[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char abc[26] = {' '};
	char *ptr_abc=&abc[0];
	
	for(int i=0;i<26;i++){
		abc[i]=65+i;
	}
	
	printf("\nAbecededario en mayuscula\n");
	for(int i=0;i<26;i++){
		printf("%c\t",toupper(*ptr_abc+i));
	}
	
	printf("\nAbecededario en minuscula\n");
	for(int i=0;i<26;i++){
		printf("%c\t",tolower(*ptr_abc+i));
	}
	return 0;
}

