/*
Ejercicio 3: Realiza un programa que pida el nombre o ubicacion del archivo de texto a continuacion añadir 
             texto al archivo hasta que el usuario lo decida.
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

    file.open(Nombre_archivo.c_str(),ios::app);

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