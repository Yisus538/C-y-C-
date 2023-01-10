#include <iostream>
using namespace std;

int main(int argc, char * argv[]){
    
    float a= 0, b=0, c=0, d=0, resultado =0;
    cout<<"Ingrese la variable a: \n"; cin>>a;
    cout<<"Ingrese la variable b: \n"; cin>>b;
    cout<<"Ingrese la variable c: \n"; cin>>c;
    cout<<"Ingrese la variable d: \n"; cin>>d;
    cout.precision(2);
    resultado = (a + b) / (c + d);
    cout<<"El resultado es: \n"<<resultado<<endl;
    
    return 0;
}