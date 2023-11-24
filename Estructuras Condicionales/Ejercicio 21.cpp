/*Ingrese dos numeros y el codigo de operacion, luego si codigo es:
1. Sumar, 2. Restar, 3. Multiplicar y 4. Division.  
*/
#include <iostream>

int main() {

	int operacion=0;
	float num1=0, num2=0, resultado=0;

	std::cout<<"ingrese los numeros 1 y 2: "<<std::endl;
	std::cin>>num1>>num2;
	std::cout<<"Seleccione una operacion: \n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n";
	std::cin>>operacion;
	switch (operacion){
		case 1:
			std::cout<<"\nSuma: "<<std::endl;
			resultado=num1 + num2;
			break;
		case 2:
			std::cout<<"\nResta: "<<std::endl;
			resultado=num1 - num2;
			break;
		case 3:
			std::cout<<"\nMultiplicacion: "<<std::endl;
			resultado=num1 * num2;
			break;
		case 4:
			std::cout<<"\nDivision: "<<std::endl;
			resultado=num1 / num2;
			break;
	}
	std::cout<<resultado<<std::endl;
	return 0;
}

