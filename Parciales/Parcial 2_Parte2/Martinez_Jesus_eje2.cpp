/*Dibuje e Implemente la clase remito con sus atributos (n�mero, apellido, 
cantidad de ladrillos, peso total de la carga) y m�todos (setter y getter 
para cada uno de sus atributos, toString, y c�lculo del peso total). 
Luego cree una funci�n main donde se instancie 2 veces la clase, una con 
el constructor por defecto y otra con un constructor con datos. 

---------------------------------------------
|Remito										|
---------------------------------------------
|- numero: int								|
|- apellido: string							|
|- cant_ladrillo: int						|
|- peso_total: float						|
---------------------------------------------
|<<create>> Remito()						|
|<<create>> Remito(int, string, int, float)	|
|+setNumero(num: int):void					|
|+getNumero():int							|
|+setApellido(ape: string):void				|
|+getApellido():string						|
|+setCant_ladrillo(cant_lad: int):void		|
|+getCant_ladrillo():int					|
|+setPeso_total(peso_tot: float):void		|
|+getPeso_total():float						|
|+toString():string							|
---------------------------------------------

*/
	




#include <iostream>
#include <string>
//se agrega la libreria para poder crear objetos de esta clase.
#include "Remito.h" 
#include "Remito.cpp"

using namespace std;

float calcular_peso_total(int);
	
int main(){
	
	//Utilizacion de del constructor por defecto
	Remito r1 = Remito();
	int numero=0, cant_ladrillo=0;
	string apellido=" ";
	cout<<"--------------------------------------------------";
	cout<<"\nCARGAR DATOS DEL REMITO: \nNumero: ";
	cin>>numero;
	r1.setNumero(numero);
	cout<<"Apellido: ";
	cin>>apellido;
	r1.setApellido(apellido);
	cout<<"Cantidad de Ladrillos: ";
	cin>>cant_ladrillo;
	r1.setCant_ladrillo(cant_ladrillo);
	r1.setPeso_total(calcular_peso_total(cant_ladrillo));

	//mostrar r1
	cout<<"\nMostrar los datos del Remito 1\n";
	cout<<r1.toString();
	
	//Utilizacion de del constructor por defecto con datos
	Remito r2 = Remito(2, "Garcia", 10, calcular_peso_total(10));
	cout<<"\nMostrar los datos del Remito 2\n";
	cout<<r2.toString();
		
	return 0;
}
	
float calcular_peso_total(int cant_ladrillo){
	return static_cast<float>(0.350 * cant_ladrillo);
}
