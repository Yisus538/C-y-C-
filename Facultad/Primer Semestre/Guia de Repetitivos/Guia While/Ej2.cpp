/*2. Dise�ar un programa que lea dos n�meros y presente una serie de opciones correspondientes 
a distintas operaciones que podemos realizar con ellos (suma, resta, multiplicaci�n y divisi�n), 
de manera que, en funci�n de la opci�n elegida, muestre el resultado de la operaci�n realizada. 
En aquellos casos en los que se desee seguir operando con los mismos n�meros, se debe contestar 
'S' (Si a la siguiente pregunta �Otra operaci�n con los mismos n�meros (S/N)?. En caso de que responda 
'N' (No) dar por terminado el programa.
*/



#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	float num1 = 0, num2 = 0, res = 0;
	int op = 0;
	char rta = 'S';
	
	cout<<"Ingrese dos numeros: "<<endl;
	cin>>num1>>num2;
	
	while(rta=='S'){
		cout<<"\nSeleccione una operacion a realizar: "<<endl;
		cout<<"1.Suma.\n2.Resta.\n3.Multi.\n4.Div."<<endl;
		cin>>op;
		switch(op){
		case 1:
			res = num1 + num2;
			break;
		case 2:
			res = num1 - num2;
			break;
		case 3:
			res = num1 * num2;
			break;
		case 4:
			res = num1 / num2;
			break;
		default:
			cout<<"La operacion ingresada no es valida"<<endl;
			continue;
		}
		cout<<"El resultado de la operacion es: "<<res<<endl;
		cout<<"�Desea hacer otra operacion con los mismos numeros (S/N)?";
		cin>>rta;
		}
		return 0;
	}
	
