//Paso de Parametros por Referencia
#include <iostream>
#include <stdlib.h>


void valNuevo(int&,int&);

int main(int argc,char*argv[]){

    int num1,num2;

    std::cout<<"Digite 2 numeros: "<<std::endl;
    std::cin>>num1>>num2;

    valNuevo(num1,num2);

    system("pause");
    return 0;
}
void valNuevo(int& xnum, int& ynum){

    std::cout<<"El valor del primer numero es: "<<xnum<<std::endl;
    std::cout<<"El valor del segundo numero es: "<<ynum<<std::endl;

}