/*
3. Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo debera ser el segundo
valor transmitido a la funcion
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

//FUNCIONES

void datos();
void funpot(int x, int y);

int num1=0, exponente=0;

int main(int argc,char*argv[]){

     datos();
     funpot(num1,exponente);

    system("pause");
    return 0;
}

void datos(){

    cout<<"Digite un numero: "<<endl;
    cin>>num1;
    cout<<"Digite el exponente: "<<endl;
    cin>>exponente;

}
void funpot(int x, int y){

    long resultado = 1;

    for(int i=1; i<=y; i++){

       resultado *= x;

    }
    cout<<"EL resultado es: "<<resultado<<endl;

}