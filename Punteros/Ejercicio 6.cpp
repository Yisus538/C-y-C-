/* Desarrolle un programa que declare e inicialice un vector de 5 
valores (4.5,8,2.3,1.1,3). Luego, se pide que calcule y muestre 
la sumatoria y el promedio. Utilice punteros para realizar el 
ejercicio.
*/


#include <iostream>

int main() {
	
	float vector[]={4.5,8,2.3,1.1,3};
	float* ptr=vector;
		
	printf("Valores\n");
	for(int i=0;i<5;i++){
		printf("%0.2f\t",*(ptr+i));
	}
		
	float sum=0, prom=0;
	float* ptr_sum=&sum, *ptr_prom=&prom;
	
		
	for(int i=0;i<5;i++){
		*ptr_sum=*ptr_sum+ptr[i];
	}
	*ptr_prom=*ptr_sum/(float)5;
	
	printf("\n\nResultados");
	printf("\nSumatoria: %0.2f",*ptr_sum); //18.90
	printf("\nPromedio: %0.2f",*ptr_prom); //3.78
	return 0;
}
