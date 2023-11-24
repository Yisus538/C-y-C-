#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[]){
    int mes=0;

    std::cout<<"Ingrese el numero de mes: \n"; std::cin>>mes;
    switch (mes) {
    case 1: std::cout<<"Enero"<<std::endl; break;
    case 2: std::cout<<"Febrero"<<std::endl; break;
    case 3: std::cout<<"Marzo"<<std::endl; break;
    case 4: std::cout<<"Abril"<<std::endl; break;
    case 5: std::cout<<"Mayo"<<std::endl; break;
    case 6: std::cout<<"Junio"<<std::endl; break;
    case 7: std::cout<<"Julio"<<std::endl; break;
    case 8: std::cout<<"Agosto"<<std::endl; break;
    case 9: std::cout<<"Septiembre"<<std::endl; break;
    case 10: std::cout<<"Octubre"<<std::endl; break;
    case 11: std::cout<<"Noviembre"<<std::endl; break;
    case 12: std::cout<<"Diciembre"<<std::endl; break;
    default:
       printf("El numero ingresado no coincide con ningun mes."); break;
    }
    return 0;
}