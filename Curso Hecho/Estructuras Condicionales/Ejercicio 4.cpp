#include <iostream>
using namespace std;

int main(){
    int numero =0;

    cout<<"Digite un numero: "; cin>>numero;
    if(numero == 0){
      cout<<"El numero es cero."<<endl;
    }else if(numero > 0){
       cout<<"El numero es positico.";
    }else{
        cout<<"El numero es negativo";
    }
    return 0;
}