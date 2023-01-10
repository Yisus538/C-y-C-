#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  
  float n1=0, n2=0, n3=0, promedio=0;

  cout<<"Ingrese la primera nota: \n"; cin>>n1;
  cout<<"Ingrese la segunda nota: \n"; cin>>n2;
  cout<<"Ingrese la tercera nota: \n"; cin>>n3;
  cout.precision(2);
  promedio = (n1 + n2 + n3)/ 3;
  cout<<"El promedio final es: "<<promedio<<endl;

  return 0;
}