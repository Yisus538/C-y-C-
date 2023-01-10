//11. Escriba un programa que calcule la suma del valor de: 2^1, 2^2, 2^3...n^3//
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(int argc, char*argv[]){

    int suma=0, n=0,potencia=0;
    cout<<"Digite un numero para usar el exponente:"; cin>>n;
    for(int i=1;i<=n;i++){
      potencia = pow(2,i);
      suma += potencia;
    }
    cout<<"La potencia es: "<<suma<<endl;
    
    getch();
    return 0;
}