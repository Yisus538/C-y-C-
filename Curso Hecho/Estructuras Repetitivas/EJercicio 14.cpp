/* En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
a) Alumnos que aprobaron todos los examenes.
b)Alumnos que aprobaron al menos un examen.
c)Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el calculo de las estadisticas.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char*argv[]){

    float examen1=0,examen2=0,examen3=0;
    int aprobados=0, aprobado=0,ultimo=0,total=0;
    
    for(int i=1;i<=5;i++){
      
      cout<<i<< "Digite el resultado del primer examen: "<<endl; cin>>examen1;
      cout<<i<< "Digite el resultado del segundo examen: "<<endl; cin>>examen2;
      cout<<i<< "Digite el resultado del tercer examen: "<<endl; cin>>examen3;
      cout<<"\n";

      if((examen1>=6)&&(examen2>=6)&&(examen3>=6)){
        aprobados++;
      }
      if((examen1>=6) || (examen2>=6) || (examen3>=6)){
        aprobado++;
      }
      if((examen1<6)&&((examen2<6)&&(examen3>=6))){
        ultimo++;
      }
    }
    cout<<"Los alumnos que aprobaron todos los examenes: "<<aprobados<<endl;
    cout<<"Los alumnos que aprobaron un examenen: "<<aprobado<<endl;
    cout<<"Los alumnos que aprobaron el ultimo examen: "<<ultimo<<endl;

    system("pause");
    return 0;
}