/*2. Dise�ar un programa que lea dos n�meros y presente una serie de opciones correspondientes 
a distintas operaciones que podemos realizar con ellos (suma, resta, multiplicaci�n y divisi�n), 
de manera que, en funci�n de la opci�n elegida, muestre el resultado de la operaci�n realizada. 
En aquellos casos en los que se desee seguir operando con los mismos n�meros, se debe contestar 
'S' (Si a la siguiente pregunta �Otra operaci�n con los mismos n�meros (S/N)?. En caso de que responda 
'N' (No) dar por terminado el programa.
*/
#include <iostream>


int main() {

	float num1 = 0, num2 = 0, res = 0;
	int op = 0;
	char rta = 'S';
	
	std::cout<<"Ingrese dos numeros: "<<std::endl;
	std::cin>>num1>>num2;
	
	while(rta=='S'){
		std::cout<<"\nSeleccione una operacion a realizar: "<<std::endl;
		std::cout<<"1.Suma.\n2.Resta.\n3.Multi.\n4.Div."<<std::endl;
		std::cin>>op;
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
			std::cout<<"La operacion ingresada no es valida"<<std::endl;
			continue;
		}
		std::cout<<"El resultado de la operacion es: "<<res<<std::endl;
		std::cout<<"�Desea hacer otra operacion con los mismos numeros (S/N)?";
		std::cin>>rta;
		}
		return 0;
	}
	
