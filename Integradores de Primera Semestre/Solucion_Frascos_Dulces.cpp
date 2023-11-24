/*En una chacra organica se dedica al cultivo de frutales para la elaboracion 
de dulces de naranja, manzana y tomate. Se solicita crear un programa que 
permita llevar el control de los costos de la produccion. Para ello se tiene 
la siguiente tabla:

Codigo		Hectareas 		Costo de		Cant. de frascos	Costo de produccion		Precio unitario		Recaudacion 
de fruta    plantadas(m2)	produccion ($)	de dulces			por frasco ($)			al publico ($)		($)
1			3000			10000			500					20						40					20000
2			2000			7000			250					28						56					14000
3			2000			6000			300					20						40					12000

Recaudacion. 46000

Crear un menu de opciones con las siguientes funciones:
a. Realice una funcion para cargar los datos. (codigo, hectareas, costo de 
produccion y cantidad de frascos de dulces)
b. Realice una funcion para calcular por cada codigo de fruta  el costo de 
produccion por frasco. (costo de produccion / cantidad de frascos de dulces)
c. Realice una funcion para calcular el precio unitario al publico. Se espera 
una ganancia del 50% adicional al costo de produccion por frasco.
d. Realice una funcion para calcular la recaudacion por cada uno de los productos.
e. Realice una funcion para calcular la recaudacion total de la chacra.
f. Realice una funcion para buscar la fruta que mejor rinde en cuanto su 
relacion cantidad de hectareas plantadas y cantidad de frascos obtenidos.
g. Realice una funcion para pasar las cantidades de frascos de dulces a un vector.
h. Realice una funcion para mostrar la matriz.

*/

#include <iostream>
using namespace std;
#define MAX 10

void cargar_datos(float[MAX][7], int);
void mostrar(float[MAX][7], int);
void calcular_costo_x_frasco(float[MAX][7], int);
void calcular_precio_publico(float [MAX][7], int);
void calcular_recaudacion(float [MAX][7], int);
float calcular_recaudacion_total(float [MAX][7], int);
float buscar_mejor_rinde(float [MAX][7], int);
void lista_cantidades(float [MAX][7], int);

int main(int argc, char *argv[]) {
	float produccion[MAX][7]={0}; 
	int tamanio=0;
	char op = ' ';
	
	do{
		cout<<"\nMENU DE OPCIONES"<<endl;
		cout<<"a. Cargar datos."<<endl;
		cout<<"b. Mostrar resumen y recaudacion total de la chacra."<<endl;
		cout<<"c. Codigo de fruta con mejor rinde."<<endl;
		cout<<"d. Listado de cantidades de frascos de dulce."<<endl;
		cout<<"\nOpcion: ";
		cin>>op;
		switch(op){
		case 'a': 
			cout<<"Ingrese la cantidad de dulces a cargar: ";
			cin>>tamanio;
			cargar_datos(produccion, tamanio);
			break;
		case 'b': 
			mostrar(produccion, tamanio);
			cout<<"Recaudacion total de la chacra $ "<<calcular_recaudacion_total(produccion, tamanio)<<endl;
			break;
		case 'c': 
			cout<<"Codigo de fruta con mejor rinde: "<<buscar_mejor_rinde(produccion, tamanio)<<endl;
			cout<<"Relacion cant. de hectareas plantadas y cant. de frascos obtenidos."<<endl;
			break;
		case 'd': 
			lista_cantidades(produccion, tamanio);
			break;
		}
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>op;
		
	}while(op=='s' || op=='S');
	
	return 0;
}

void cargar_datos(float produccion[MAX][7], int tamanio){
	cout<<"Carga de Datos"<<endl;
	for (int i=0; i<tamanio; i++){
		cout<<"\nCodigo: "<<i+1<<": \n";
		produccion[i][0]=i+1;
		cout<<"Ingrese las hectarias plantadas (m2): ";
		cin>>produccion[i][1];
		cout<<"Ingrese costo de produccion ($): ";
		cin>>produccion[i][2];
		cout<<"Ingrese cantidad de frascos de dulce: ";
		cin>>produccion[i][3];
	}
	calcular_costo_x_frasco(produccion, tamanio);
	calcular_precio_publico(produccion, tamanio);
	calcular_recaudacion(produccion, tamanio);
}
void mostrar(float produccion[MAX][7], int tamanio){
	cout<<"\nCod.\tH.P.(m2)\tC.P.($)\tC.F.\tC.P.($)\tP.U.($)\tR($)"<<endl;
	for (int i=0; i<tamanio; i++){
		for (int j=0; j<7; j++){
			cout<<produccion[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void calcular_costo_x_frasco(float produccion[MAX][7], int tamanio){
	for (int i=0; i<tamanio; i++){
		produccion[i][4]=produccion[i][2]/produccion[i][3];
	}
}
	
void calcular_precio_publico(float produccion[MAX][7], int tamanio){
	for (int i=0; i<tamanio; i++){
		produccion[i][5]=produccion[i][4]*2; 
	}
}
	
void calcular_recaudacion(float produccion[MAX][7], int tamanio){
	for (int i=0; i<tamanio; i++){
		produccion[i][6]=produccion[i][3]*produccion[i][5]; 
	}
}

float calcular_recaudacion_total(float produccion[MAX][7], int tamanio){
	float total=0;
	for (int i=0; i<tamanio; i++){
		total=total+produccion[i][6]; 
	}
	return total;
}

float buscar_mejor_rinde(float produccion[MAX][7], int tamanio){
	float total=0, mejor_cod=0, mejor_rinde=0;
	
	for (int i=0; i<tamanio; i++){
		if(i==0){
			mejor_rinde=produccion[i][1]/produccion[i][3];
			mejor_cod=produccion[i][0];
		}else{
			/* Para calcular el mejor rinde entre relacion cantidad de hectareas 
			 plantadas y cantidad de frascos obtenidos.
			hectarias/cant frascos     el valor menor es el mejor rinde.
			*/
			if(mejor_rinde>(produccion[i][1]/produccion[i][3])){
				mejor_cod=produccion[i][0];
			}
		}
	}
	return mejor_cod;
}

void lista_cantidades(float produccion[MAX][7], int tamanio){
	float listado[MAX]={0};
	int c=0;
	for (int i=0; i<tamanio; i++){
		listado[c]=produccion[i][3];
		c++;
	}
	cout<<"Listado de cantidad de frascos de dulce"<<endl;
	for (int j=0; j<c; j++){
		cout<<listado[j]<<"\t";
	}
	
}
