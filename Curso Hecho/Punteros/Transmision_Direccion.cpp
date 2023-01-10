//Intercambia los valores con puntero.
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void Intercambio(float *,float *);

int main(int argc,char*argv[]){

    float num1 = 20.8,num2 = 30.5;

    printf("El numero 1 es: %0.2f\n",num1);
    printf("El numero 2 es: %0.2f\n",num2);

    Intercambio(&num1,&num2);

    system("pause");
    return 0; 
}
void Intercambio(float *dir_num1,float *dir_num2){

    float aux;

    aux = *dir_num1;
    *dir_num1 = *dir_num2;
    *dir_num2 = aux;

    printf("El numero 1 es: %0.2f\n",*dir_num1);
    printf("El numero 2 es: %0.2f\n",*dir_num2);
}