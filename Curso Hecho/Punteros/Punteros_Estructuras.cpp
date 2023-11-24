//Punteros a Estructuras
#include <iostream>
#include <stdlib.h>


struct Persona{
    char nombre[30];
    int edad;
}persona, *puntero_persona{&persona};

void Pedirdatos();
void Mostrar(Persona *);

int main(int argc,char*argv[]){

    Pedirdatos();
    Mostrar(puntero_persona);  

    system("pause");
    return 0;
}
void Pedirdatos(){

    std::cout<<"Digite su nombre: "<<std::endl; std::cin.getline(puntero_persona->nombre,30,'\n');
    std::cout<<"Digite la edad: "<<std::endl; std::cin>>puntero_persona->edad;

}
void Mostrar(Persona* puntero_persona){

    std::cout<<puntero_persona->nombre<<std::endl;
    std::cout<<puntero_persona->edad<<std::endl;
}