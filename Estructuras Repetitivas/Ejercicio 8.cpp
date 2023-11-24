//8. Escriba un programa que calcuile el valor de: 1+3+5+...+2n-1//
#include <iostream>

int main(){

    int nElementos =0, sumaTotal=0;
    std::cout<<"Digite un numero de elementos a sumar: "; std::cin>>nElementos;

    for(int i=1; i<=2*nElementos-1;i+=2){
      sumaTotal += i;
    }
    std::cout<<"La suma es: "<<sumaTotal<<std::endl;
    system("pause");
    return 0;
}