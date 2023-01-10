#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    float x= 0, y=0, resultado=0;

    cout<<"Ingrese x: "; cin>>x;
    cout<<"Ingrese y"; cin>>y;

    resultado = (sqrt(x))/ (pow(y,2) -1);
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}