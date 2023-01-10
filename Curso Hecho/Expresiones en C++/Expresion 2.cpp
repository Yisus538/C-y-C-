#include <iostream>
using namespace std;

int main(){

    float a=0, b=0, c=0, d=0,e=0,f=0, resultado=0;

    cout<<"Ingrese el digito a: \n"; cin>>a;
    cout<<"Ingrese el digito b: \n"; cin>>b;
    cout<<"Ingrese el digito c: \n"; cin>>c;
    cout<<"Ingrese el digito d: \n"; cin>>d;
    cout<<"Ingrese el digito e: \n"; cin>>e;
    cout<<"Ingrese el digito f: \n"; cin>>f;
    cout.precision(2);

    resultado = (a + (b/c)) / (d + (e/f));
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}