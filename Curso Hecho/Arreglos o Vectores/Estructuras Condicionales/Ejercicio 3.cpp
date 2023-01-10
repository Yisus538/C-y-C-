#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int numero=0;
    cout<<"Digite un numero: "; cin>>numero;

    if(numero==0){
      cout<<"El numero es cero";
    }else if(numero%2==0){
      cout<<"El numero es par";
    }else{
      cout<<"El numero es impar";
    }
    return 0;
}