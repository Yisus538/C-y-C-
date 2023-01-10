/*
4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
   nombre,pais,numero_medallas. y devuelva los datos(Nombre,pais) del atleta que ha ganado el mayor numero de medallas.
*/ 
#include <iostream>
#include <conio.h>
using namespace std;

struct atleta{

    char Nombre[20];
    char Pais[30];
    int numero_medallas;

}Atletas[100];

int main(int argc,char*argv[]){

    int tam,max,min,Pmax,Pmin;

    cout<<"Cuantos atletas van a ser?: "<<endl;
    cin>>tam;

    for(int i = 0; i < tam; i++){

        fflush(stdin);
        cout<<i+1<<" Nombre: "<<endl;
        cin.getline(Atletas[i].Nombre,20,'\n');
        cout<<i+1<<" Pais: "<<endl;
        cin.getline(Atletas[i].Pais,30,'\n');
        cout<<"Numero de medallas: "<<endl;
        cin>>Atletas[i].numero_medallas;
        cout<<"\n";

        if(Atletas[i].numero_medallas>max){
            max = Atletas[i].numero_medallas;
            Pmax = i;
        }
        if(Atletas[i].numero_medallas<min){
            min = Atletas[i].numero_medallas;
            Pmin = i;
        }

    }

    cout<<"\n\nDATOS DEL ATLETA CON MAYOR MEDALLAS"<<endl;
    cout<<"Nombre: "<<Atletas[Pmax].Nombre<<endl;
    cout<<"Pais: "<<Atletas[Pmax].Pais<<endl;

    cout<<"\n\nDATOS DEL ATLETA CON MENOR MEDALLAS"<<endl;
    cout<<"Nombre: "<<Atletas[Pmin].Nombre<<endl;
    cout<<"Pais: "<<Atletas[Pmin].Pais<<endl;

    getch();
    return 0;
}