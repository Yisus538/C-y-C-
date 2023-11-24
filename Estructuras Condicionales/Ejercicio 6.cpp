#include <iostream>
using namespace std;

int main(){
	char letra;
	
	cout<<"Escribi un caracter: "; cin>>letra;
	
	switch (letra){
	case 'a':  
	case 'e': 
	case 'i': 
	case 'o': 
	case 'u': 
		cout<<"la vocal es minuscula"; break;
		
	case 'A':  
	case 'E': 
	case 'I': 
	case 'O': 
	case 'U': 
		cout<<"la vocal es mayuscula"; break;
	default: 
    cout<<"No es una vocal."; break;
	}
	return 0;
}