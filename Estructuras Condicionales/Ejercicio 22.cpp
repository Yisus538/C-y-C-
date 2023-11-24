/*Realice un algoritmo que solicite una letra, y luego diga si la misma 
es vocal o consonante.
*/
#include <iostream>


int main(int argc, char *argv[]) {

	char letra=' ';

	std::cout<<"Ingrese letra: ";
	std::cin>>letra;
	switch (letra){ 
	case 'a':
		std::cout<<"Vocal. "<<std::endl;
		break;
	case 'e':
		std::cout<<"Vocal. "<<std::endl;
		break;
	case 'i': 
		std::cout<<"Vocal. "<<std::endl; 
		break;
	case 'o': 
		std::cout<<"Vocal. "<<std::endl; 
		break;
	case 'u':
		std::cout<<"Vocal. "<<std::endl; 
		break;
	default: 
		std::cout<<"No es vocal. "<<std::endl; 
		break;
	}
	return 0;
}

