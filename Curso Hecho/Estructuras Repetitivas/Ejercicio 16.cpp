// 16. Realice un programa que calcule la descomposicion en factores primos de un numero entero.
// Por ejemplo 20=2*2*5.
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char* argv[]){

    int numero=0;

    cout<<"Digite un numero: "; cin>>numero;
    for(int i=2;numero>1;i++){
      while(numero%i==0){
        cout<<i<<" ";
        numero /= i;
      }
    }
  
    getch();
    return 0;
}