#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc,char** argv){

    ofstream file;
    string Nombre_archivo;

    cout<<"Ingrese el nombre del archivo: "<<endl; getline(cin,Nombre_archivo);

    file.open(Nombre_archivo.c_str(),ios::app);

    if(file.fail()){
        cout<<"El archivo no se a podido abrir."<<endl;
        exit(EXIT_SUCCESS);
    }

    file<<"Añadiendo archivo."<<endl;


    file.close();
    system("pause");
    return 0;
}