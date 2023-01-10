/*
Ejercicio 1: Realice un programa que pida el nombre de un archivo de texto y a continuacion permita agregar tantas
             frases como el usuario decida poner.
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc,char** argv){

    ofstream file;
    string Nombre_archivo,frase;
    char opc = ' ';

    cout<<"Ingrese el nombre del archivo: "<<endl; getline(cin,Nombre_archivo);

    file.open(Nombre_archivo.c_str(),ios::out);

    if(file.fail()){
        cout<<"El archivo no se a podido abrir."<<endl;
        exit(EXIT_SUCCESS);
    }

    do{
        cout<<"Ingrese la frase: "<<endl;
        getline(cin,frase);
        file<<frase<<endl;

        cout<<"Desea seguir escribiendo?(s/n): "<<endl;
        cin>>opc;
    }while(opc == 's' || opc == 'S');


    file.close();
    system("pause");
    return 0;
}