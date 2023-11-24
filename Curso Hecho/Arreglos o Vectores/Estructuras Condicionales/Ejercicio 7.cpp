#include <iostream>
#include <stdio.h>


int main(int argc,char**argv){
    int edad =0;

    std::cout<<"Cual es tu edad?: "; std::cin>>edad;

   if(edad>= 18 && edad <= 25){
      printf("La edad esta en el rango solicitado.");
    }else {
      printf("La edad no esta en el rango de 18-25.");
    }
    return 0;
}