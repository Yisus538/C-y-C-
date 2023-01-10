
/* Crear un menu de opciones con las siguientes operaciones: 
a. Elevar a la potencia de 2 un numero.
b. Raiz cuadrada de un numero.
c. Raiz cubica de un numero. 
d. Calcular el seno, coseno y tangente de un angulo.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	char op=' ', rta=' ';
	int num=0, res=0;

	do{
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"a. Potencia de 2 de un numero."<<endl;
		cout<<"b. Raiz cuadrada de un numero."<<endl;
		cout<<"c. Raiz cubica de un numero. "<<endl;
		cout<<"d. Calcular el seno, coseno y tangente de un angulo."<<endl;
		cin>>op;
		switch(op){
		case 'a': 
			cout<<"\na. Potencia de 2."<<endl;
			cout<<"Ingrese un numero: ";
			cin>>num;
			res=pow(num,2);
			cout<<"Resultado: "<<res<<endl;
			break;
		case 'b': 
			cout<<"\nb. Raiz cuadrada."<<endl;
			cout<<"Ingrese un numero: ";
			cin>>num;
			res=sqrt(num);
			cout<<"Resultado: "<<res<<endl;
			break;
		case 'c': 
			cout<<"\nc. Raiz cubica."<<endl;
			cout<<"Ingrese un numero: ";
			cin>>num;
			res=cbrt(num);
			cout<<"Resultado: "<<res<<endl;
			break;
		case 'd': 
			cout<<"\nd. Calcular el seno, coseno y tangente de un angulo."<<endl;
			cout<<"Ingrese un angulo en grados: ";
			cin>>num;
			float rad=0, seno=0, coseno=0, tangente=0;
			rad=(((float)num*M_PI)/180);
			seno = sin(rad);
			coseno = cos(rad);
			tangente = tan(rad);
			cout<<num<<"º = "<<rad<<" en Radianes. "<<endl;
			cout<<"El seno de "<<num<<" es "<<seno<<endl;
			cout<<"El coseno de "<<num<<" es "<<coseno<<endl;
			cout<<"El tangente de "<<num<<" es "<<tangente<<endl;
			break;
		}
		
		cout<<"\n¿Desea realizar otra operacion? (s/n) "<<endl;
		cin>>rta;
		
	}while(rta=='s' || rta=='S');
	
	return 0;
}

