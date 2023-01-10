/*
12. Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector esta ordenado
crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento
del vector es mayor o igual que el elemento que le precede en el vector.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirdato();
void orden(int vec[],int tam);

int vec[100],tam=0;

int main(int argc,char*argv[]){

    pedirdato();
    orden(vec,tam);


    system("pause");
    return 0;
}
void pedirdato(){

    cout<<"Digite el numero de elementos del vector: "<<endl;
    cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<i+1<<". Digite un numero: "<<end;
        cin>>vec[i];
    }

}
void orden(int vec[], int tam){

    char band= 'F';

    int i=0 ;

    while((band=='F') && (i<tam-1)){
        if(vec[i]>vec[i+1]){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"El array esta ordenado Crecientemente. "<<endl;
    }else{
        cout<<"EL arreglo NO esta ordenado. "<<endl;
    }

}