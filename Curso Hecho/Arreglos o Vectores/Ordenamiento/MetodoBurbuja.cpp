//Metodo burbuja
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int numero[] = {4,1,2,3,5};
    int i,j,aux;

    //Algoritmo de metodo burbuja.
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(numero[j] > numero [j+1]){
                aux = numero [j];
                numero[j] = numero[j+1];
                numero[j+1] = aux;
            }
        }
    }
    cout<<"Orden Ascendente: "<<endl;

    for(i=0; i<5; i++){
        cout<<nummero[i]<<endl;
    }
    cout<<"Orden Descendente: "<<endl;
    for(i=4; i>=0; i--){
        cout<<numero[i]<<endl;
    }

    system("pause");
    return 0;
}