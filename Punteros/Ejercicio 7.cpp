/*Desarrollar un programa que declare e inicialice un vector tipo 
char con el abecedario. Luego mostrar en pantalla el abecedario 
en mayuscula y minuscula, utilizando punteros. Nota: la funcion 
para pasar a mayuscula es toupper() y a minusculas es tolower().  
Ejemplo: cadena[i] = tolower(cadena[i]); En codigo ASCII A=65

*/


#include <iostream>

int main() {
	
	char abc[26] = {' '};
	char* ptr_abc=&abc[0];
	
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

