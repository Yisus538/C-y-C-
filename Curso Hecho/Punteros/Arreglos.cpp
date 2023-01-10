//Correspondecia entre arreglo y puntero.
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int numero[] = {1,2,3,4,5};
    int *ptr = numero;

    for(int i = 0; i < 5 ; i++){
        cout<<"El numero es: "<<*(ptr+i)<<endl;
        cout<<"Su posicion es: "<<ptr+i<<endl;
    }



    system("pause");
    return 0;
}