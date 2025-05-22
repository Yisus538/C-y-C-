/*Escribir un programa que solicite dos numeros y luego una de las operaciones
del menu de opciones: 
a. sumar
b. restar
c. multiplicar
d. dividir dos numeros
e. elevar a una potencia
f. calcular la raiz de numero

Luego mostrar el resultado y preguntar si desea realizar otra operacion o 
terminar el programa.

Utilizar punteros para el calculo de las operaciones
Libreria: #include <math.h>
*/
#include <iostream>
#include <math.h>


int main() {
	char op=' ';
	float n1=0, n2=0;
	float* ptr_n1=&n1,* ptr_n2=&n2;
		
	do{
		printf("Ingrese dos numeros:\n");   
		scanf("%f%f",&n1, &n2);
		printf("Menu de operaciones:\n"); 
		printf("a. Sumar\n"); 
		printf("b. Restar\n"); 
		printf("c. Multiplicar\n"); 
		printf("d. Dividir\n"); 
		printf("e. Potencia\n"); 
		printf("f. Raiz cuadrada\n");
		scanf(" %c",&op);
		switch(op){
			case 'a': 
				printf("Resultado de la suma: %0.2f\n",*ptr_n1+*ptr_n2); 
				break;
			case 'b': 
				printf("Resultado de la resta: %0.2f\n",*ptr_n1-*ptr_n2); 
			break;
			case 'c': 
				printf("Resultado de la multiplicacion: %0.2f\n",(*ptr_n1)*(*ptr_n2)); 
			break;
			case 'd': 
				printf("Resultado de la division: %0.2f\n",(*ptr_n1)/(*ptr_n2)); 
			break;
			case 'e': 
				printf("Resultado de la potencia: %0.2f\n",pow(*ptr_n1,(*ptr_n2))); 
			break;
			case 'f': 
				printf("Resultado de la raiz: %0.2f\n",pow(*ptr_n1,(1/(*ptr_n2)))); 
				printf("Resultado de la raiz cuadrada de n1: %0.2f\n",sqrt(*ptr_n1)); 
				printf("Resultado de la raiz cuadrada de n2: %0.2f\n",sqrt(*ptr_n2)); 
			break;
		}
		printf("\n�Desea seguir (S/N)? ");
		scanf(" %c",&op);
	}while(op=='s' || op=='S');
	return 0;
}
