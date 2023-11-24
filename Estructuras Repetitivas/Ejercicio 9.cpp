//9. Escriba un programa que calcule el valor de: 1*2*3*...*n(factorial)
#include <iostream>

int main(){

    int numero=0, factorial =1;

    std::cout<<"Digite un numero: "; std::cin>>numero;
    for(int i=1;i<=numero;i++){
       factorial *=i;
    }
    std::cout<<"La multiplicacion es: "<<factorial;

    system("pause");
    return 0;
}