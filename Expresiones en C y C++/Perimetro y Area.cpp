/*Realiza un programa que calcule el perimetro y area de 
las siguientes figuras geometricas: 
cuadrado.   perimetro=4+lado area=lado*lado
rectangulo. perimetro=2base+2altura area=base*altura */

#include <iostream>

int main() {

	float perimetro=0, area=0, lado=0, base=0, altura=0;

	std::cout<<"Cuadrado.\nIngrese el lado: "<<std::endl; std::cin>>lado;
	
	perimetro=4*lado;
	area=lado*lado;
	
	std::cout<<"Perimetro: "<<perimetro<<" Area: "<<area<<std::endl;
	std::cout<<"\nRectangulo.\nIngrese base y altura: "<<std::endl;
	std::cin>>base>>altura;
	
	perimetro=(2*base)+(2*altura);
	area=base*altura;
	std::cout<<"Perimetro: "<<perimetro<<" Area: "<<area<<std::endl;
	
	return 0;
}
