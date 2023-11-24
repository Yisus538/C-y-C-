#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]){
  int numero=0, dato= 5;

  cout<<"Digite un numero: \n"; cin>>numero;

  if(numero == dato){
    printf("El numero ingresado coincide con el dato.");
  }else{
      printf("Error el numero ingresado no coincide. ");
  }
 return 0;
}