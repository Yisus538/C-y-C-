/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios, copiar el contenido a otra matriaz
     y por ultimo mostrarla en pantalla.
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc,char*argv[]){


    int vector1[100][100]={0},vector2[100][100]={0},dato=0,filas=0,columnas=0;
    srand (time(NULL));

    cout<<"Escriba el numero de filas: "<<endl; cin>>filas;
    cout<<"Escriba el numero de columnas: "<<endl; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; i<columnas; j++){

           dato = 1 + rand ()% (100);
           vector1[i][j] = dato;
           
        }

    }
    for(int i=0; i<filas; i++){
        for(int j=0; i<columnas; j++){

           vector2[i][j] = vector1[i][j];
           
        }

    }
    for(int i=0; i<filas; i++){
        for(int j=0; i<columnas; j++){

           cout<<vector2[i][j]<<" ";
           
        }
       cout<<"\n";
    }


 system("pause");
 return 0;
 
}