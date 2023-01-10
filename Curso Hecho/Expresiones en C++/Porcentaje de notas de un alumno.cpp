#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    float practica=0, teorica=0, participacion=0, nota_final= 0;
	cout<<"Digite la nota practica: \n "; cin>>practica;
	cout<<"Digite la nota del teorico: \n"; cin>>teorica;
	cout<<"Digite la nota de participacion: \n"; cin>>participacion;
	
	practica = practica * 0,30;
	teorica = teorica * 0,60;
	participacion = participacion * 0,10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"La nota final es: "<<nota_final;
    
    return 0;
}