#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    float a = 0, b =0, resultado=0;
	
	cout<<"Ingrese la variable a: \n"; cin>>a;
	cout<<"Ingrese la variable b: \n"; cin>>b;
	cout.precision(2);
	resultado = (a/b) + 1;
	cout<<"El resultado de su operacion es: " <<resultado<< endl;

    return 0;
}