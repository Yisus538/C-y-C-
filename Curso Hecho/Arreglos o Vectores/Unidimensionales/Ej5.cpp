/*
5. Desarrolle un vector de numeros enteros y determine el mayor elemento del vector.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

  int vector[100]={0},n=0,mayor=0;

  cout<<"Escriba el alcance del arrays: "<<endl; cin>>n;

  for(int i=0; i<n; i++){

    cout<<"Escribe un elemento: "<<endl; cin>>vector[i];

    if(vector[i]>mayor){
        mayor = vector[i];
    }  
  }
  cout<<"El mayor elemento del vector es: "<<mayor<<endl;

  system("pause");
  return 0;
}