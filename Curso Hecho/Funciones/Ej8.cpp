#include <iostream>
#include <stdlib.h>
using namespace std;

//Prototipo de Funcion
void cambio(int,int&,int&,int&,int&,int&,int&);


int main(int argc,char*argv[]){

    int valor=0,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

    cout<<"Digite la cantidad en dolares: "<<endl;
    cin>>valor;

    cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);

    cout<<"Cantidad de billetes a entregar como cambio: "<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Ciencuenta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;

    system("pause");
    return 0;
}

void cambio(int valor, int& cien,int& cincuenta,int& veinte, int& diez,int& cinco,int& uno){

   cien = valor/100;
   valor %= 100;
   cincuenta = valor/50;
   valor %= 50;
   veinte = valor /20;
   valor %= 20;
   diez = valor/10;
   valor %= 10;
   cinco = valor/5;
   uno = valor%5;

}