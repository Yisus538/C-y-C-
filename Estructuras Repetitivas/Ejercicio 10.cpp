//11. Escriba un programa que calcule la suma del valor de: 2^1, 2^2, 2^3...n^3//
#include <iostream>
#include <math.h>


int main(){

    int suma=0, n=0,potencia=0;
    std::cout<<"Digite un numero para usar el exponente:"; std::cin>>n;
    for(int i=1;i<=n;i++){
      potencia = pow(2,i);
      suma += potencia;
    }
    std::cout<<"La potencia es: "<<suma<<std::endl;
    
    system("pause");
    return 0;
}