//Leer un archivo de texto.
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void Escribir();

int main(int argc,char**argv){

    ifstream file;
    string text;

    Escribir();

    file.open("Jesus.txt",ios::in);

    if(file.fail()){
        cout<<"El archivo no se a podido leer."<<endl;
        exit(EXIT_FAILURE);
    }

    while(!file.eof()){
        getline(file,text);
        cout<<text<<endl;
    }

    file.close();
    system("pause");
    return 0;
}
void Escribir(){

    ofstream file;
    string Nombre_archivo;

    cout<<"Ingrese el nombre del archivo: "<<endl; getline(cin,Nombre_archivo);

    file.open(Nombre_archivo.c_str(),ios::out);

    if(file.fail()){
        cout<<"El archivo no se a podido abrir."<<endl;
        exit(EXIT_SUCCESS);
    }

    file<<"Creando archivo de texto."<<endl;


    file.close();

}