//7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>


int main(){
    int n=0,suma=0;

    std::cout<<"Digite el numero de elementos: "; std::cin>>n;
    for(int i=1;i<=n;i++){
      suma += i;
    }
    std::cout<<"La suma es: "<<suma<<std::endl;

    return 0;
}