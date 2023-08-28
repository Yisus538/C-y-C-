//Punteros a Estructuras
#include <iostream>
#include <stdlib.h>
using namespace std;

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

    cout<<"Digite su nombre: "<<endl; cin.getline(puntero_persona->nombre,30,'\n');
    cout<<"Digite la edad: "<<endl; cin>>puntero_persona->edad;

}
void Mostrar(Persona *puntero_persona){

    cout<<puntero_persona->nombre<<endl;
    cout<<puntero_persona->edad<<endl;
}