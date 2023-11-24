#include <iostream>

int main(){
  
  float n1=0, n2=0, n3=0, promedio=0;

  std::cout<<"Ingrese la primera nota: \n"; std::cin>>n1;
  std::cout<<"Ingrese la segunda nota: \n"; std::cin>>n2;
  std::cout<<"Ingrese la tercera nota: \n"; std::cin>>n3;
  std::cout.precision(2);
  promedio = (n1 + n2 + n3)/ 3;
  std::cout<<"El promedio final es: "<<promedio<<std::endl;

  return 0;
}