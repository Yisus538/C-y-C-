#include <iostream>
using namespace std;

int main(int argc,char**argv){
	
	int saldo_inicial=1000, opc=0; 
	float extra=0,retiro=0,saldo=0;
	
	cout<<"\tBienvenido a su Cajero Virtual"<<endl;
	cout<<"1. Ingrese dinero a cuenta"<<endl;
	cout<<"2. Retire dinero de cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; cin>>opc;
	
	switch(opc){
		
	case 1: 
		cout<<"Cuanto dinero desea ingresar?: \n"; cin>>extra;
		saldo= extra + saldo_inicial;
		cout<<"Su dinero en cuenta es de: "<<saldo;
		break;
	case 2:
		cout<<"Cuanto dinero desea retirar de la cuenta?: "; cin>>retiro;
		if(retiro > saldo_inicial){
			cout<<"No tiene esa cantidad de dinero.";
		}else{
			saldo = saldo_inicial - retiro;
			cout<<"Su saldo restante es de: "<<saldo;
		}
		break;
	case 3: break;
	
	}
	return 0;
}
