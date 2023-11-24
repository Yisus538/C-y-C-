#include <iostream>
#include <stdlib.h>


//Prototipo de Funcion
void cambio(int,int&,int&,int&,int&,int&,int&);


int main(int argc,char*argv[]){

    int valor=0,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

    std::cout<<"Digite la cantidad en dolares: "<<std::endl;
    std::cin>>valor;

    cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);

    std::cout<<"Cantidad de billetes a entregar como cambio: "<<std::endl;
    std::cout<<"Cien: "<<cien<<std::endl;
    std::cout<<"Ciencuenta: "<<cincuenta<<std::endl;
    std::cout<<"Veinte: "<<veinte<<std::endl;
    std::cout<<"Diez: "<<diez<<std::endl;
    std::cout<<"Cinco: "<<cinco<<std::endl;
    std::cout<<"Uno: "<<uno<<std::endl;

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