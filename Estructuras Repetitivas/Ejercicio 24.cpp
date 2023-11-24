
/* Crear un menu de opciones con las siguientes operaciones: 
a. Elevar a la potencia de 2 un numero.
b. Raiz cuadrada de un numero.
c. Raiz cubica de un numero. 
d. Calcular el seno, coseno y tangente de un angulo.
*/

#include <iostream>
#include <math.h>

int main() {
	
	char op=' ', rta=' ';
	int num=0, res=0;

	do{
		std::cout<<"MENU DE OPCIONES"<<std::endl;
		std::cout<<"a. Potencia de 2 de un numero."<<std::endl;
		std::cout<<"b. Raiz cuadrada de un numero."<<std::endl;
		std::cout<<"c. Raiz cubica de un numero. "<<std::endl;
		std::cout<<"d. Calcular el seno, coseno y tangente de un angulo."<<std::endl;
		std::cin>>op;
		switch(op){
		case 'a': 
			std::cout<<"\na. Potencia de 2."<<std::endl;
			std::cout<<"Ingrese un numero: ";
			std::cin>>num;
			res=pow(num,2);
			std::cout<<"Resultado: "<<res<<std::endl;
			break;
		case 'b': 
			std::cout<<"\nb. Raiz cuadrada."<<std::endl;
			std::cout<<"Ingrese un numero: ";
			std::cin>>num;
			res=sqrt(num);
			std::cout<<"Resultado: "<<res<<std::endl;
			break;
		case 'c': 
			std::cout<<"\nc. Raiz cubica."<<std::endl;
			std::cout<<"Ingrese un numero: ";
			std::cin>>num;
			res=cbrt(num);
			std::cout<<"Resultado: "<<res<<std::endl;
			break;
		case 'd': 
			std::cout<<"\nd. Calcular el seno, coseno y tangente de un angulo."<<std::endl;
			std::cout<<"Ingrese un angulo en grados: ";
			std::cin>>num;
			float rad=0, seno=0, coseno=0, tangente=0;
			rad=(((float)num*M_PI)/180);
			seno = sin(rad);
			coseno = cos(rad);
			tangente = tan(rad);
			std::cout<<num<<"º = "<<rad<<" en Radianes. "<<std::endl;
			std::cout<<"El seno de "<<num<<" es "<<seno<<std::endl;
			std::cout<<"El coseno de "<<num<<" es "<<coseno<<std::endl;
			std::cout<<"El tangente de "<<num<<" es "<<tangente<<std::endl;
			break;
		}
		
		std::cout<<"\n¿Desea realizar otra operacion? (s/n) "<<std::endl;
		std::cin>>rta;
		
	}while(rta=='s' || rta=='S');
	
	return 0;
}

