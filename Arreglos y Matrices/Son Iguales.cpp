/* 
3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, 
   en caso de no serlo, indicar cual es mayor alfabeticamento.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main(){

    char palabra1[100]= "",palabra2[100]="";

    std::cout<<"Digite una cadena de texto: "<<std::endl;
    std::cin.getline(palabra1,100,'\n');
    std::cout<<"Digite otra cadena de texto: "<<std::endl;
    std::cin.getline(palabra2,100,'\n');

    if((strcmp(palabra1,palabra2)==0)){
      std::cout<<"Ambas son iguales "<<std::endl;
      
    }else if(strcmp(palabra1,palabra2) > 0){
      std::cout<<palabra1<<" es mayor alfabeticamente. "<<std::endl;

    }else{
        std::cout<<palabra2<<" es mayor alfabeticamente. "<<std::endl;
    }

    system("pause");
    return 0;
}