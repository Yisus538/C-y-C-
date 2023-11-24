/*
9. Escriba una funcion nombreada tiempo() qye tenga un parametro en numereo entero llamado totalSeg y 
   trees parametros de referencia enteros nombreados hora, min,seg. La funcion es convertir el numero de 
   segundos transmitido en un numero equivalente de hora, minutos y segundos.  
*/
#include <iostream>
#include <stdlib.h>


//Prototipo de Funcion
void tiempo(int,int&,int&,int&);


int main(int argc,char*argv[]){
    
    int totalseg=0, hora,min,seg;

    std::cout<<"Digite el numero total de segundos: "<<std::endl;
    min>>totalseg;
    
    tiempo(totalseg,hora,min,seg);

    std::cout<<"\nTiempo equivalente a la cantidad de segundos: "<<std::endl;
    std::cout<<"Horas: "<<hora<<std::endl;
    std::cout<<"Minutos: "<<min<<std::endl;
    std::cout<<"Segundos: "<<seg<<std::endl;


    system("pause");
    return 0;
}

void tiempo(int totalseg,int& hora,int& min,int& seg){
hora = totalseg/3600;
totalseg %= 3600;
min = totalseg/60;
seg = totalseg%60;

}
