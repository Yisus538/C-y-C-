#include <iostream>
using namespace std;

int main(int argc, char * argv[]){
   int n1 =0, n2=0, n3=0;

   cout<<"Cuales son tus 3 numeros: "; cin>>n1>>n2>>n3;

   if(n1>=n2 && n1>= n3){
       cout<<"El mayor es: "<<n1<<endl;
   }else if(n2 >= n1 && n2 >= n3 ){
       cout<<"El mayor es: "<<n2<<endl;
   }else{
       cout<<"El mayor es: "<<n3<<endl;
   }
    return 0;
}