//7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n=0,suma=0;

    cout<<"Digite el numero de elementos: "; cin>>n;
    for(int i=1;i<=n;i++){
      suma += i;
    }
    cout<<"La suma es: "<<suma<<endl;

    getch();
    return 0;
}