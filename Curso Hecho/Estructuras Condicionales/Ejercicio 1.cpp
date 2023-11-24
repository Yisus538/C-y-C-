#include <iostream>


int main(int argc, char * argv[]){
   int n1 =0, n2=0;

   std::cout<<"Cuales son tus 2 numeros: "; std::cin>>n1>>n2;

   if(n1==n2){
       std::cout<<"Ambos numeros son iguales";
   }else if(n1>n2){
       std::cout<<"El mayor es: "<<n1;
   }else{
       std::cout<<"El mayor es: "<<n2;
   }
    return 0;
}