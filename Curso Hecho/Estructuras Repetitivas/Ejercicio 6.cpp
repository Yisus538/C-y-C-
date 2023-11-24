/*6. Escriba un programa que calcule x^y donde tanto x como y son enteros positivos, sin utilizar la funcion pow.*/
#include <iostream>
#include <stdlib.h>


int main(int argc, char*argv[]){

    int x=0, y=0,elevacion=0;
    
    std::cout<<"Digita el valor de x: \n"; std::cin>>x;
    std::cout<<"Digita el valor de y: \n"; std::cin>>y;

    for(int i=1; i<=y;i++){
       elevacion *= x;
    }
     std::cout<<"El resultado de la elevacion es: "<<elevacion<<std::endl;
    system("pause");
    return 0;
}