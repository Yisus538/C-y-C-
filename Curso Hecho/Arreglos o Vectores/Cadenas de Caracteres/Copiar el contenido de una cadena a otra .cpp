/*
 Copiar el contenido de una cadena a otra - Funcion strcpy()
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc,char*argv[]){

   char nombre[]= "Yisus";
   char nombre2[20]= "";

   strcpy(nombre2,nombre);

   cout<<"Tu nombre es: "<<nombre2<<endl;

    system("pause");
    return 0;
}