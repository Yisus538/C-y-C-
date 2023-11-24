#include <iostream>


int main(){
    int n1=0, n2=0,n3=0, n4=0;

    std::cout<<"Escriba 3 numeros: "; std::cin>>n1>>n2>>n3;
    std::cout<<"Escribe un cuarto numero: "; std::cin>>n4;

    if((n1 == n4) || (n2 == n4) || (n3==n4)){
      printf("El cuarto numero coincide con al menos con 1 de los 3 anteriores.");
    }else{
        printf("El cuarto numero no coincide con los anteriores.");
    }
    return 0;
}