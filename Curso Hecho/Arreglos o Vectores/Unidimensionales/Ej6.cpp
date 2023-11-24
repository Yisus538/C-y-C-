/*
6. Escribe un programa que defina un vector de numeros y calcule si existe
algun numero en el vector cuyo valor equivale a la suma del resto de numeros
del vector.
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc,char*argv[]){


    int vector[5]= {1,4,3,1,2},suma=0,mayor=0;

    for(int i=0; i<5; i++){

      suma += vector[i];
     
      if(vector[i] > mayor){
        mayor = vector[i];
      }

    }
    if(mayor == suma-mayor){
 
        printf("EL numero %d equivale a la suma de los demas.\n",mayor);

    }else{
        printf("No existe un numero que equivale a la suma de los demas.\n");
    }


    system("pause");
    return 0;
}