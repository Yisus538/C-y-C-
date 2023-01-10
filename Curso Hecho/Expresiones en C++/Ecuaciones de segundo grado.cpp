#include <iostream>
#include <math.h>
using namespace std;

int main(int argc,char*argv[]){

    float a=0, b=0, c=0, resultado1=0, resultado2=0;

    cout<<"Cual es a: \n"; cin>>a;
    cout<<"Cual es b: \n"; cin>>b;
    cout<<"Cual es c: \n"; cin>>c;

    resultado1 = (-b+ (sqrt(pow(b,2)- (4*a*c))))/(2*a);
	resultado2 = (-b- (sqrt(pow(b,2)- (4*a*c))))/(2*a);

    cout<<"El resultado 1 es: "<<resultado1<<endl;
    cout<<"El resultado 2 es: "<<resultado2<<endl;

    return 0;
}