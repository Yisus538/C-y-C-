//Estructuras anidadas
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct info_direccion{

    char direccion[30];
    char ciudad[20];
    char provincia[20];

};
struct empleado{
    
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;

}empleado[2];


int main(int argc,char*argv[]){

    //Tomar Datos
    for(int i = 0; i < 2; i++){

        fflush(stdin);
        
        cout<<"Ingrese su nombre: "<<endl;
        cin.getline(empleado[i].nombre,20,'\n');
        cout<<"Ingrese su direccion: "<<endl;
        cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
        cout<<"Ingrese la ciudad donde vive: "<<endl;
        cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
        cout<<"Ingresa la provincia: "<<endl;
        cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
        cout<<"Ingresa el salario del empleado: "<<endl;
        cin>>empleado[i].salario;
        cout<<"\n";

    }

    //Imprimir datos
    for(int i = 0; i < 2; i++){

        cout<<"Nombre: "<<empleado[i].nombre<<endl;
        cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleado[i].salario<<endl;

    }


    system("pause");
    return 0;
}