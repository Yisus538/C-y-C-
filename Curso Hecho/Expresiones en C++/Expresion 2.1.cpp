#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    
    float a =0, b=0, c=0, d=0, resultado=0;

    cout<<"Ingrese el digito a: \n"; cin>>a;
    cout<<"Ingrese el digito b: \n"; cin>>b;
    cout<<"Ingrese el digito c: \n"; cin>>c;
    cout<<"Ingrese el digito d: \n"; cin>>d;

    cout.precision(2);
    resultado = a + (b/(c-d));
    cout<<"EL resultado es: "<<resultado<<endl;
    return 0;
}