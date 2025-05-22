/* Desarrollar el ejercicio anterior con funciones. Crear una 
funcion que pase los valores a mayusculas y una funcion que 
pase los valores a minusculas. Desarrollar un programa que 
declare e inicialice un vector tipo char con el abecedario. 
Luego mostrar en pantalla el abecedario en mayuscula y minuscula,  
utilizando punteros. Nota: la funcion para pasar a mayuscula es 
toupper() y a minusculas es tolower(). 
Ejemplo: cadena[i] = tolower(cadena[i]); En codigo ASCII A=65

*/
#include <iostream>

void mostrarMayuscula(char*);
void mostrarMinuscula(char*);

int main() {
	char abc[26] = {' '};
	char* ptr_abc=&abc[0];
	
	for(int i=0;i<26;i++){
		abc[i]=65+i;
	}
	
	mostrarMayuscula(ptr_abc);
	mostrarMinuscula(ptr_abc);
	
	return 0;
}

void mostrarMayuscula(char* ptr_abc){
	printf("\nAbecededario en mayuscula\n");
	for(int i=0;i<26;i++){
		printf("%c\t",toupper(*ptr_abc+i));
	}
}

void mostrarMinuscula(char* ptr_abc){
	printf("\nAbecededario en minuscula\n");
	for(int i=0;i<26;i++){
		printf("%c\t",tolower(*ptr_abc+i));
	}
}

