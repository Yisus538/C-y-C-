#include <iostream>
#include <math.h>
using namespace std;

int main(int argc,char**argv){
    int opcion=0,num=0;
    float numero=0, cubo=0;

     cout<<"\t Menu"<<endl;
     cout<<"1. Cubo de un numero."<<endl;
     cout<<"2. Numero par o impar."<<endl;
     cout<<"3. Salir."<<endl;
     cout<<"OPCION: ";cin>>opcion;

     switch (opcion){
       case 1: 
          cout<<"Digite un numero: ";cin>>numero;
          cubo= pow(numero,3);
          cout<<"El cubo de "<<numero<< " es " <<cubo;
        break;
       case 2: 
          cout<<"Ingrese un numero: "; cin>>num;
          if(num%2==0){
            cout<<"El numero es par "<<endl;
          } else{
              cout<<"El numero es impar "<<endl;
          }
        break;
       case 3: break;
     }
    return 0;
}