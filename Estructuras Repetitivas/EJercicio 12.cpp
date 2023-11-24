/* En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
a) Alumnos que aprobaron todos los examenes.
b)Alumnos que aprobaron al menos un examen.
c)Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el calculo de las estadisticas.*/

#include <iostream>
#include <stdlib.h>


int main(){

    float examen1=0,examen2=0,examen3=0;
    int aprobados=0, aprobado=0,ultimo=0,total=0;
    
    for(int i=1;i<=5;i++){
      
      std::cout<<i<< "Digite el resultado del primer examen: "<<std::endl; std::cin>>examen1;
      std::cout<<i<< "Digite el resultado del segundo examen: "<<std::endl; std::cin>>examen2;
      std::cout<<i<< "Digite el resultado del tercer examen: "<<std::endl; std::cin>>examen3;
      std::cout<<"\n";

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
    std::cout<<"Los alumnos que aprobaron todos los examenes: "<<aprobados<<std::endl;
    std::cout<<"Los alumnos que aprobaron un examenen: "<<aprobado<<std::endl;
    std::cout<<"Los alumnos que aprobaron el ultimo examen: "<<ultimo<<std::endl;

    system("pause");
    return 0;
}