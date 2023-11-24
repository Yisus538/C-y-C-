//8. Escriba un programa que calcuile el valor de: 1+3+5+...+2n-1//
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char*argv[]){

    int nElementos =0, sumaTotal=0;
    cout<<"Digite un numero de elementos a sumar: "; cin>>nElementos;

    for(int i=1; i<=2*nElementos-1;i+=2){
      sumaTotal += i;
    }
    cout<<"La suma es: "<<sumaTotal<<endl;
    getch();
    return 0;
}