#include <iostream>


int main(int argc, char* argv[]){
 int numero=0;

    std::cout<<"Ingrese un numero entre 1-5: "; std::cin>>numero;

 switch(numero){
   case 1: std::cout<<"Es el numero 1"; break;
   case 2: std::cout<<"Es el numero 2"; break;
   case 3: std::cout<<"Es el numero 3"; break;
   case 4: std::cout<<"Es el numero 4"; break;
   case 5: std::cout<<"Es el numero 5"; break;
   default: std::cout<<"No esta en el rango de 1-5"; break;

 }

 return 0;

}