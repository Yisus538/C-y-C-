#include <iostream>


int main(){
    int numero =0;

    std::cout<<"Digite un numero: "; std::cin>>numero;
    if(numero == 0){
      std::cout<<"El numero es cero."<<std::endl;
    }else if(numero > 0){
       std::cout<<"El numero es positico.";
    }else{
        std::cout<<"El numero es negativo";
    }
    return 0;
}