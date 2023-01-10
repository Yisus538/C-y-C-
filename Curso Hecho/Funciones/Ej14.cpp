/*
14. Realizar una funcion que tome como parametros un vector de enteros y su tamaño e imprima n vector
con los elementos impares del vector recibido.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void arrays(int vec[],int tam);


int vec[100],tam=0;

int main(int argc,char*argv[]){

    pedirDatos();
    arrays(vec,tam);

    system("pause");
    return 0;
}
void pedirDatos(){

    cout<<"Ingrese el tamaño del vector: "<<endl;
    cin>>tam;

    for(int i=0; i<tam; i++){

        cout<<i+1<<". Digite el numero: "<<endl;
        cin>>vec[i];

    }

}
void arrays(int vec[],int tam){

    int impar[100]={0}, j=0;

    for(int i=0; i<tam; i++){
         if(vec[i]%2!=0){
             impar[j] = vec[i];
             j++;
         }

    }

    cout<<"Imprimiendo los elementos impares del vector: "<<endl;
    for(int i=0; i<j; i++){
        cout<<impar[i]<<" "<<endl;
    }

}