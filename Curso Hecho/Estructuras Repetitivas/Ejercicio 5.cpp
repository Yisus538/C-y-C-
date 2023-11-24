/* 5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango 
[20-30] o se introduzca el valor 0, El programa debe entregar la suma de los valores mayores a 0
introducidos*/
#include <iostream>
#include <stdlib.h>


int main(int argc, char*argv[]){

    int numero=0,suma=0;
      
    do{
     std::cout<<"Digite un numero: "; std::cin>>numero;
     if(numero>0){
       suma += numero;
     }

    }while((numero !=0) && (numero<20) || (numero>30));

    std::cout<<"La suma de los valores mayores a cero es: "<<suma;
    
    system("pause");
    return 0;
}