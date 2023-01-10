#include <iostream>]
using namespace std;

int main(int argc, char *argv[]){
    
    int x=0, y=0, aux=0;

    cout<<"Digita el valor de x: \n"; cin>>x;
    cout<<"Digita el valor de y: \n"; cin>>y;

    aux = x;
    x= y;
    y = aux;

    cout<<"El nuevo valor de x es: "<<x<<endl;
    cout<<"El nuevo valor de y es: "<<y<<endl;
    
    return 0;
}