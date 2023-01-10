/*Realiza un programa que calcule el perimetro y area de 
las siguientes figuras geometricas: 
cuadrado.   perimetro=4+lado area=lado*lado
rectangulo. perimetro=2base+2altura area=base*altura */

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	float perimetro=0, area=0, lado=0, base=0, altura=0;
	cout<<"Cuadrado.\nIngrese el lado: "<<endl;
	cin>>lado;
	perimetro=4*lado;
	area=lado*lado;
	cout<<"Perimetro: "<<perimetro<<" Area: "<<area<<endl;
	cout<<"\nRectangulo.\nIngrese base y altura: "<<endl;
	cin>>base>>altura;
	perimetro=(2*base)+(2*altura);
	area=base*altura;
	cout<<"Perimetro: "<<perimetro<<" Area: "<<area<<endl;
	return 0;
}
