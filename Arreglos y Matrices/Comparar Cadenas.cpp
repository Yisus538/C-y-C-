// Comparar cadenas - Funcion strcmp()
#include <iostream>
#include <cstring>

int main(){

    char palabra1[]= "beccero";
    char palabra2[]= "avion";

    if(strcmp(palabra1,palabra2) > 0){
        std::cout<<palabra1<<" esta despues alfabeticamente. "<<std::endl;
    }

    system("pause");
    return 0;
}