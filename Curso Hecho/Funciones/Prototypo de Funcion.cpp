#include <iostream>
#include <stdlib.h>
using namespace std;

int todasputas(int x, int y);

int main(int argc,char*argv[]){

 int num1=0, num2=0;

 cout<<"Digite 2 numeros: "<<endl;
 cin>>num1>>num2;

 cout<<"El mayor numero es: "<<todasputas(num1,num2)<<endl;

 system("pause");
 return 0;
}

int todasputas(int x, int y){

    int NumMax=0;

  if(x>y){
    NumMax= x;
  }else{
    NumMax= y;
  }

  return NumMax; 
}