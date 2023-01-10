/*
9. Escriba una funcion nombreada tiempo() qye tenga un parametro en numereo entero llamado totalSeg y 
   trees parametros de referencia enteros nombreados hora, min,seg. La funcion es convertir el numero de 
   segundos transmitido en un numero equivalente de hora, minutos y segundos.  
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

//Prototipo de Funcion
void tiempo(int,int&,int&,int&);


int main(int argc,char*argv[]){
    
    int totalseg=0, hora,min,seg;

    cout<<"Digite el numero total de segundos: "<<endl;
    cin>>totalseg;       
    
    tiempo(totalseg,hora,min,seg);

    cout<<"\nTiempo equivalente a la cantidad de segundos: "<<endl;
    cout<<"Horas: "<<hora<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;


    system("pause");
    return 0;
}

void tiempo(int totalseg,int& hora,int& min,int& seg){
hora = totalseg/3600;
totalseg %= 3600;
min = totalseg/60;
seg = totalseg%60;

}
