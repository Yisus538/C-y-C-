#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h"
using namespace std;

DiaAnio::DiaAnio(){

}
DiaAnio::DiaAnio(int dia,int mes){
    this->dia = dia;
    this->mes = mes;
}
bool DiaAnio::igual(DiaAnio &d){
    if(dia==d.dia && mes==d.mes){
        return true;
    }else{
        return false;
    }
}
void DiaAnio::Visualizar(){
    cout<<"\tMOSTRANDO LOS DATOS\n"<<endl;
    cout<<"Mes : "<<mes<<"\nDia: "<<dia<<endl;
}