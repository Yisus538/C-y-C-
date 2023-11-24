/*
 4. Ewscribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso- del ultimo al primer elemento.
*/
#include <stdio.h>


int main(int argc,char*argv[]){

    int numeros[]={1,2,3,4,5};

    for(int i=4; i>=0; i--){
  
      printf("Vector[%d] = %d\n",i,numeros[i]);
      
    }

    return 0;
}