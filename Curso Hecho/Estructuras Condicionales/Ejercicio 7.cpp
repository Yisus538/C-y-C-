#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int edad =0;

    cout<<"Cual es tu edad?: "; cin>>edad;

   if(edad>= 18 && edad <= 25){
      printf("La edad esta en el rango solicitado.");
    }else {
      printf("La edad no esta en el rango de 18-25.");
    }
    return 0;
}