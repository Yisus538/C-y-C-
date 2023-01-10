//Cadenas de Caracteres
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(int argc,char*argv[]){
    /*
     char palabras[] = "Manuel";
     char palabras2[] = {'M','a','n','u','e','l'};

     cout<<palabras<<endl;
     cout<<palabras2<<endl;
    */
    char nombre[20]={" "};

    cout<<"Escriba su nombre: "<<endl;
    cin.getline(nombre,20,'\n');

    cout<<nombre<<endl;

    system("pause");
    return 0;
}