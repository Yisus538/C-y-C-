/*
 Copiar el contenido de una cadena a otra - Funcion strcpy()
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main(){

   char nombre[]= "Yisus";
   char nombre2[20]= "";

   strcpy(nombre2,nombre);

   std::cout<<"Tu nombre es: "<<nombre2<<std::endl;

    system("pause");
    return 0;
}