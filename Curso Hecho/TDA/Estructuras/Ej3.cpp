/*
3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los
   datos del empleado con mayor y menor salario.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;


struct Empleados{

    char Nombre[20];
    float salario;

}Empleados[100];

int main(int argc,char*argv[]){

    int tam,max,min,PMayor,PMenor = 999999;

    cout<<"Ingrese la cantidad de empleados: "<<endl;
    cin>>tam;

    for(int i = 0; i < tam; i++){

        fflush(stdin);
        cout<<"Nombre: "<<endl;
        cin.getline(Empleados[i].Nombre,20,'\n');
        cout<<"Salario: "<<endl;
        cin>>Empleados[i].salario;

        if(Empleados[i].salario>max){
            max = Empleados[i].salario;
            PMayor = i;
        }else if(Empleados[i].salario < min){
            min = Empleados[i].salario;
            PMenor = i;
        }
        cout<<"\n";

    }
    cout<<"\n\nDATOS DEL EMPLEADO MAYOR"<<endl;
    cout<<"Nombre: "<<Empleados[PMayor].Nombre<<endl;
    cout<<"Salario: "<<Empleados[PMayor].salario<<endl;

    cout<<"\n\nDATOS DEL EMPLEADO MENOR"<<endl;
    cout<<"Nombre: "<<Empleados[PMenor].Nombre<<endl;
    cout<<"Salario: "<<Empleados[PMenor].salario<<endl;

    system("pause");
    return 0;
}