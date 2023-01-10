//2. Realice un programa que lea de la entrada estandar numeros hasta que
// se introduzcan un cero. En ese momento el program debe terminar y mostrar en la salida estandar el numero de valores mayores que cero
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]){
    
    int numero=0, conteo=0;

    do{
      cout<<"Digita un numero: "; cin>>numero;

      if(numero>0){
        conteo++;
      }

    }while(numero != 0);
      cout<<"\nEL numero de valores mayores a cero introducidos es: "<<conteo<<endl;
    system("pause");
    return 0;
}