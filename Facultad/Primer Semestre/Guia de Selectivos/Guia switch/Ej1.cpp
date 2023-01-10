/*Ingrese un numero y diga a que di­a de la semana corresponde (la semana 
empieza el domingo).*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia=0;
	cout<<"Ingrese un numero del 1-7: ";
	cin>>dia;
	switch(dia){
		case 1: cout<<"Domingo";
			break;
		case 2: cout<<"Lunes";
			break;
		case 3: cout<<"Martes";
			break;
		case 4: cout<<"Miercoles";
			break;
		case 5: cout<<"Jueves";
			break;
		case 6: cout<<"Viernes";
			break;
		case 7: cout<<"Sabado";
			break;
	}
	return 0;
}

