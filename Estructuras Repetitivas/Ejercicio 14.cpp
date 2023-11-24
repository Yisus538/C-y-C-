// 16. Realice un programa que calcule la descomposicion en factores primos de un numero entero.
// Por ejemplo 20=2*2*5.
#include <iostream>


int main(){

    int numero=0;

    std::cout<<"Digite un numero: "; std::cin>>numero;
    for(int i=2;numero>1;i++){
      while(numero%i==0){
        std::cout<<i<<" ";
        numero /= i;
      }
    }
  
    system("pause");
    return 0;
}