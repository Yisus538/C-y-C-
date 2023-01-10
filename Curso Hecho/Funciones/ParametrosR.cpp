//Paso de Parametros por Referencia
#include <iostream>
#include <stdlib.h>
using namespace std;

void valNuevo(int&,int&);

int main(int argc,char*argv[]){

    int num1,num2;

    cout<<"Digite 2 numeros: "<<endl;
    cin>>num1>>num2;

    valNuevo(num1,num2);

    system("pause");
    return 0;
}
void valNuevo(int& xnum, int& ynum){

    cout<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"El valor del segundo numero es: "<<ynum<<endl;

}