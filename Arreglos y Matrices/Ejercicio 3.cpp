/*Realice un programa que permita cargar el abecedario en 
un vector. Luego muestre el abecedario ingresado.
*/

#include <stdio.h>

int main() {
	int i=0;
	char v[26]={' '};
	
	for(i=0;i<26;i++){
		v[i]=i+65; //De acuerdo al codigo ASCII A=65
	}
	
	printf("Abecedario\n");
	for(i=0;i<26;i++){
		printf(" %c-",v[i]);
	}

	return 0;
}



