// Comparar cadenas - Funcion strcmp()
#include <iostream>
#include <stdlib.h>
#include <string.h>


int main(int argc,char*argv[]){

    char palabra1[]= "beccero";
    char palabra2[]= "avion";

    if(strcmp(palabra1,palabra2) > 0){
        std::cout<<palabra1<<" esta despues alfabeticamente. "<<std::endl;
    }

    system("pause");
    return 0;
}