//12. Hacer un programa que calcule el resultado de la siguiente expresion : 1-2+3+4+5-6....n
#include <iostream>
#include <stdlib.h>


int main(){

    int nElementos=0,pares=0,sumaPares=0,impares=0,sumaImpares=0,sumaTotal=0;
     std::cout<<"Digite el numero: "; std::cin>>nElementos;
     
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
    std::cout<<"La suma total es de:"<<sumaTotal<<std::endl;
    system("pause");
    return 0;
}