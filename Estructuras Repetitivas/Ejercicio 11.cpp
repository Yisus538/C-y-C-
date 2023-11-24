//12. Hacer un programa que calcule el resultado de la siguiente expresion : 1-2+3+4+5-6....n
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int nElementos=0,pares=0,sumaPares=0,impares=0,sumaImpares=0,sumaTotal=0;
     cout<<"Digite el numero: "; cin>>nElementos;
     
    for(int i=1;i<=nElementos;i++){
      if(i%2==0){
        pares = i*-1;
        sumaPares += pares;
      }else{
          impares= i;
          sumaImpares += i;
        }
    }
    sumaTotal = sumaImpares + sumaPares;
    cout<<"La suma total es de:"<<sumaTotal<<endl;
    system("pause");
    return 0;
}