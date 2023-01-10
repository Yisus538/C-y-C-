/*Ingrese dos numeros y el codigo de operacion, luego si codigo es:
1. Sumar, 2. Restar, 3. Multiplicar y 4. Division.  
*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int operacion=0;
	float num1=0, num2=0, resultado=0;
	cout<<"ingrese los numeros 1 y 2: "<<endl;
	cin>>num1>>num2;
	cout<<"Seleccione una operacion: \n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n";
	cin>>operacion;
	switch (operacion){
		case 1:
			cout<<"\nSuma: "<<endl;
			resultado=num1 + num2;
			break;
		case 2:
			cout<<"\nResta: "<<endl;
			resultado=num1 - num2;
			break;
		case 3:
			cout<<"\nMultiplicacion: "<<endl;
			resultado=num1 * num2;
			break;
		case 4:
			cout<<"\nDivision: "<<endl;
			resultado=num1 / num2;
			break;
	}
	cout<<resultado<<endl;
	return 0;
}

