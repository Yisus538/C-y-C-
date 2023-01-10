/*
7. Intercambiar el valor de 2 variables utilizando paso de parametros por referencia.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void intercambiar(int&,int&);

int main(int argc,char*argv[]){

    int num1=10, num2=15;


    cout<<"El valor de num1 es: "<<num1<<endl;
    cout<<"EL valor de num2 es: "<<num2<<endl;

    intercambiar(num1,num2);
   
    cout<<"El nuevo valor de num1 es: "<<num1<<endl;
    cout<<"EL nuevo valor de num2 es: "<<num2<<endl;

    system("pause");
    return 0;
}

void intercambiar(int& num1, int& num2){

    int aux=0;

    aux = num1;
    num1 = num2;
    num2= aux;


}