/*Realice un algoritmo que solicite una letra, y luego diga si la misma 
es vocal o consonante.
*/

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	char letra=' ';
	cout<<"Ingrese letra: ";
	cin>>letra;
	switch (letra){ 
	case 'a':
		cout<<"Vocal. "<<endl;
		break;
	case 'e':
		cout<<"Vocal. "<<endl;
		break;
	case 'i': 
		cout<<"Vocal. "<<endl; 
		break;
	case 'o': 
		cout<<"Vocal. "<<endl; 
		break;
	case 'u':
		cout<<"Vocal. "<<endl; 
		break;
	default: 
		cout<<"No es vocal. "<<endl; 
		break;
	}
	return 0;
}

