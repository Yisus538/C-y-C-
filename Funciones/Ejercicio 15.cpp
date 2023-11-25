/*
10. Escriba una funcion nombrada calc_años() que tenga un parametro entero que represente el numero total de dias
desde la fecha 1/1/2000 y parametros de referencia nombrados año, mes y dia. La funcion es calcular el año, mes y dia 
acutal para el numero dado de dias que se le transmitan. Usando las referencias, la funcion debera alterar en forma directa
los argumentos respectivosen la funcion que llama. Para este problema supong que cada año tiene 365 dias y cada mes
30 dias.
*/
#include <iostream>
#include <stdlib.h>

void calc_anos(int,int&,int&,int&);

int main(){
  
    int totaldias=0, ano=0, mes=0,dia=0;

    std::cout<<"Digite el numero total de dias: "<<std::endl;
    std::cin>>totaldias;

    calc_anos(totaldias,ano,mes,dia);

    std::cout<<"La fecha actual: "<<dia+1<<"/"<<mes+1<<"/"<<ano+2000<<std::endl;

    system("pause");
    return 0;
}
void calc_anos(int totaldias,int& ano,int& mes,int& dia){

  ano = totaldias/365;
  totaldias %= 365;
  mes = totaldias/30;
  dia = totaldias%30;

}
