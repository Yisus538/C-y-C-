/*
6. Escriba una plantilla de funcion llamada maximo() de tres argumentos que se trasmitan a la funcion
   cuando sea llamada.
   Suponga que los tres argumentos seran del mismo tipo de datos.
*/
#include <iostream>
#include <stdlib.h>

void pediDato();
template <typename TD>TD maximo(TD,TD,TD);

//Variables Globales
int dato1= 0, dato2= 0, dato3= 0;

int main(){
    
    pediDato();
    std::cout<<"EL maximo valor es: "<<maximo(dato1,dato2,dato3)<<std::endl;


    system("pause");
    return 0;
}
void pediDato(){

    std::cout<<"Ingrese 3 datos: "<<std::endl;
    std::cin>>dato1>>dato2>>dato3;

}
template <class TD>
TD maximo(TD x,TD y,TD z){

    TD max = 0;

    if((x>=y) && (x>=z)){
        max = x;
    }else if((y>=x) && (y>=z)){
        max = y;
    }else{
        max = z;
    }
    return max;

}

