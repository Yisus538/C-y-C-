#include <iostream>


int main(int argc,char**argv){
	
	int saldo_inicial=1000, opc=0; 
	float extra=0,retiro=0,saldo=0;
	
	std::cout<<"\tBienvenido a su Cajero Virtual"<<std::endl;
	std::cout<<"1. Ingrese dinero a cuenta"<<std::endl;
	std::cout<<"2. Retire dinero de cuenta"<<std::endl;
	std::cout<<"3. Salir"<<std::endl;
	std::cout<<"Opcion: "; std::cin>>opc;
	
	switch(opc){
		
	case 1: 
		std::cout<<"Cuanto dinero desea ingresar?: \n"; std::cin>>extra;
		saldo= extra + saldo_inicial;
		std::cout<<"Su dinero en cuenta es de: "<<saldo;
		break;
	case 2:
		std::cout<<"Cuanto dinero desea retirar de la cuenta?: "; std::cin>>retiro;
		if(retiro > saldo_inicial){
			std::cout<<"No tiene esa cantidad de dinero.";
		}else{
			saldo = saldo_inicial - retiro;
			std::cout<<"Su saldo restante es de: "<<saldo;
		}
		break;
	case 3: break;
	
	}
	return 0;
}
