/*
5. Desarrolle un vector de numeros enteros y determine el mayor elemento del vector.
*/
#include <iostream>

int main(){

  int vector[100]={0},n=0,mayor=0;

  std::cout<<"Escriba el alcance del arrays: "<<std::endl; std::cin>>n;

  for(int i=0; i<n; i++){

    std::cout<<"Escribe un elemento: "<<std::endl; std::cin>>vector[i];

    if(vector[i]>mayor){
        mayor = vector[i];
    }  
  }
  std::cout<<"El mayor elemento del vector es: "<<mayor<<std::endl;

  system("pause");
  return 0;
}