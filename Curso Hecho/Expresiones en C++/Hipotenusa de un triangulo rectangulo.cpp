#include <iostream>
#include <math.h>
using namespace std;

int main(){
     
    float cateto1=0, cateto2=0, hip=0;

    cout<<"Ingrese el cateto 1: "; cin>>cateto1;
    cout<<"Ingrese el cateto 2:"; cin>>cateto2;

    hip = sqrt(pow(cateto1,2)+ pow(cateto2,2));

    cout.precision(2);
    cout<<"La hipotenusa del triangulo es: "<<hip<<endl;
    return 0;
}