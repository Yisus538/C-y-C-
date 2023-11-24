#include <iostream>


int main(int argc, char *argv[]){
    int numero=0;
    std::cout<<"Digite un numero: "; std::cin>>numero;

    if(numero==0){
      std::cout<<"El numero es cero";
    }else if(numero%2==0){
      std::cout<<"El numero es par";
    }else{
      std::cout<<"El numero es impar";
    }
    return 0;
}