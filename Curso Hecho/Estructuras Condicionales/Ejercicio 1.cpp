#include <iostream>
using namespace std;

int main(int argc, char * argv[]){
   int n1 =0, n2=0;

   cout<<"Cuales son tus 2 numeros: "; cin>>n1>>n2;

   if(n1==n2){
       cout<<"Ambos numeros son iguales";
   }else if(n1>n2){
       cout<<"El mayor es: "<<n1;
   }else{
       cout<<"El mayor es: "<<n2;
   }
    return 0;
}