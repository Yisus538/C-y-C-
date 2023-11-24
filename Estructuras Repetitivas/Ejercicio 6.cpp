/*6. Escriba un programa que calcule x^y donde tanto x como y son enteros positivos, sin utilizar la funcion pow.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char*argv[]){

    int x=0, y=0,elevacion=0;
    
    cout<<"Digita el valor de x: \n"; cin>>x;
    cout<<"Digita el valor de y: \n"; cin>>y;

    for(int i=1; i<=y;i++){
       elevacion *= x;
    }
     cout<<"El resultado de la elevacion es: "<<elevacion<<endl; 
    system("pause");
    return 0;
}