/*
7. Contar vocales de un nombre con punteros.
*/
#include <iostream>
#include <string>


void PedirDatos(char*);
int Vocales(char*);

int main(int argc,char*argv[]){

    char usuario[30];
    
    PedirDatos(usuario);
    std::cout<<"La cantidad de vocales que hay son: "<<Vocales(usuario)<<std::endl;

    system("pause");
    return 0;
}
void PedirDatos(char* usuario){

    std::cout<<"Ingrese su nombre: "<<std::endl;
    std::cin.getline(usuario,30,'\n');

    strupr(usuario);
}
int Vocales(char* nombre){

    int contador = 0; 

    while(*nombre){
        switch(*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                contador++;
                break;               
        }
        nombre++;
    }
    return contador;

}