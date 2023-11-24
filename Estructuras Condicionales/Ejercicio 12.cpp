#include <iostream>
#include <math.h>


int main(){
    int opcion=0,num=0;
    float numero=0, cubo=0;

     std::cout<<"\t Menu"<<std::endl;
     std::cout<<"1. Cubo de un numero."<<std::endl;
     std::cout<<"2. Numero par o impar."<<std::endl;
     std::cout<<"3. Salir."<<std::endl;
     std::cout<<"OPCION: ";std::cin>>opcion;

     switch (opcion){
       case 1: 
          std::cout<<"Digite un numero: ";std::cin>>numero;
          cubo= pow(numero,3);
          std::cout<<"El cubo de "<<numero<< " es " <<cubo;
        break;
       case 2: 
          std::cout<<"Ingrese un numero: "; std::cin>>num;
          if(num%2==0){
            std::cout<<"El numero es par";
          } else{
              std::cout<<"El numero es impar";
          }
        break;
       case 3: break;
     }
    return 0;
}