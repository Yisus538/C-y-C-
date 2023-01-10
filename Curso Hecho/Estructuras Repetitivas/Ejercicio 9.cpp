//9. Escriba un programa que calcule el valor de: 1*2*3*...*n(factorial)
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char*argv[]){

    int numero=0, factorial =1;

    cout<<"Digite un numero: "; cin>>numero;
    for(int i=1;i<=numero;i++){
       factorial *=i;
    }
    cout<<"La multiplicacion es: "<<factorial;

    getch();
    return 0;
}