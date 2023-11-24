/* 
3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, 
   en caso de no serlo, indicar cual es mayor alfabeticamento.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc,char*argv[]){

    char palabra1[100]= "",palabra2[100]="";

    cout<<"Digite una cadena de texto: "<<endl; 
    cin.getline(palabra1,100,'\n');
    cout<<"Digite otra cadena de texto: "<<endl;
    cin.getline(palabra2,100,'\n');

    if((strcmp(palabra1,palabra2)==0)){
      cout<<"Ambas son iguales "<<endl;
      
    }else if(strcmp(palabra1,palabra2) > 0){
      cout<<palabra1<<" es mayor alfabeticamente. "<<endl;

    }else{
        cout<<palabra2<<" es mayor alfabeticamente. "<<endl;
    }

    system("pause");
    return 0;
}