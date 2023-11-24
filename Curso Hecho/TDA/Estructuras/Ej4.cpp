/*
4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
   nombre,pais,numero_medallas. y devuelva los datos(Nombre,pais) del atleta que ha ganado el mayor numero de medallas.
*/ 
#include <iostream>

struct atleta{

    char Nombre[20];
    char Pais[30];
    int numero_medallas;

}Atletas[100];

int main(int argc,char*argv[]){

    int tam,max,min,Pmax,Pmin;

    std::cout<<"Cuantos atletas van a ser?: "<<std::endl;
    std::cin>>tam;

    for(int i = 0; i < tam; i++){

        fflush(stdin);
        std::cout<<i+1<<" Nombre: "<<std::endl;
        std::cin.getline(Atletas[i].Nombre,20,'\n');
        std::cout<<i+1<<" Pais: "<<std::endl;
        std::cin.getline(Atletas[i].Pais,30,'\n');
        std::cout<<"Numero de medallas: "<<std::endl;
        std::cin>>Atletas[i].numero_medallas;
        std::cout<<"\n";

        if(Atletas[i].numero_medallas>max){
            max = Atletas[i].numero_medallas;
            Pmax = i;
        }
        if(Atletas[i].numero_medallas<min){
            min = Atletas[i].numero_medallas;
            Pmin = i;
        }

    }

    std::cout<<"\n\nDATOS DEL ATLETA CON MAYOR MEDALLAS"<<std::endl;
    std::cout<<"Nombre: "<<Atletas[Pmax].Nombre<<std::endl;
    std::cout<<"Pais: "<<Atletas[Pmax].Pais<<std::endl;

    std::cout<<"\n\nDATOS DEL ATLETA CON MENOR MEDALLAS"<<std::endl;
    std::cout<<"Nombre: "<<Atletas[Pmin].Nombre<<std::endl;
    std::cout<<"Pais: "<<Atletas[Pmin].Pais<<std::endl;

    return 0;
}