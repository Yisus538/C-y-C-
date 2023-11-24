#include <iostream>


int main(){
	char letra;
	
	std::cout<<"Escribi un caracter: "; std::cin>>letra;
	
	switch (letra){
	case 'a':  
	case 'e': 
	case 'i': 
	case 'o': 
	case 'u': 
		std::cout<<"la vocal es minuscula"; break;
		
	case 'A':  
	case 'E': 
	case 'I': 
	case 'O': 
	case 'U': 
		std::cout<<"la vocal es mayuscula"; break;
	default: 
    std::cout<<"No es una vocal."; break;
	}
	return 0;
}