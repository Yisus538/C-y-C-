#include <iostream>

int main(int argc, char * argv[]){
   int n1 =0, n2=0, n3=0;

    std::cout<<"Cuales son tus 3 numeros: "; std::cin>>n1>>n2>>n3;

   if(n1>=n2 && n1>= n3){
       std::cout<<"El mayor es: "<<n1<<std::endl;
   }else if(n2 >= n1 && n2 >= n3 ){
       std::cout<<"El mayor es: "<<n2<<std::endl;
   }else{
       std::cout<<"El mayor es: "<<n3<<std::endl;
   }
    return 0;
}