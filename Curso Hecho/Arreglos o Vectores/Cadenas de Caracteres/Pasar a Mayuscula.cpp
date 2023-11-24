// Pasar una palabra a Mayuscula - FUncion strupr()
#include <iostream>
#include <stdlib.h>
#include <string>


int main(int argc,char*argv[]){

    char palabra[] = "martinez";

    strupr(palabra);


    std::cout<<palabra<<std::endl;

    system("pause");
    return 0;
}