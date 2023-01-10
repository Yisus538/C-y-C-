/*Una libreria de la ciudad desea gestionar la facturacion de su 
comercio, para ello se genera un menu de opciones para las 
distintas operaciones del negocio.

Se tendra un arreglo stock con los codigos y precios unitarios 
de los arti­culos. (Declarar e inicializar el arreglo directamente)

Codigo   Precio Unitario    Cantidad
1		10					50
2		30					30
3		1					10
4		100					25
5		20					0
6		50.5				15
7		5.5					5

Crear un menu de opciones con las siguientes operaciones:
a. Registrar una venta. Se solicitara el codigo del arti­culo 
y la cantidad que lleva. Luego deberan ejecutarse las 
siguientes funciones: 
-estaDisponible(), es una funcion que consulta si hay 
disponibilidad de ese articulo en el arreglo stock, si es asi
debera restar la cantidad (la resta no puede dar numero negativo),
caso contrario debera informar la falta de ese articulo.
-buscarPrecio(), es una funcion que busca el precio unitario 
de un arti­culo en el arreglo stock) por codigo de articulo. 
-calcularSubtotal(), es una funcion que calcula los subtotales 
de cada articulo, es decir cantidad*precio_unitario en en 
arreglo factura.
-calcularTotal(), es una funcion que suma todos los subtotales 
del arreglo factura. 
-mostrarFactura(), es una funcion que muestra la factura a pagar 
por el cliente. Luego se pregunta con cuÃ¡nto va abonar y se 
calcula su vuelto si es necesario.  Ejemplo de factura:


********************************FACTURA Nº 1 *****************************
Codigo	Cantidad	Precio Unitario($)	Subtotal($)
1		2			10					20
7		1			5.5					5.5
3		3			1					3
Total: $ 28.5
************************************************************************
¿Con cuanto va abonar? $30                             
Vuelto: $1,5

b. Cada vez que se registra una venta el total es almacenado en un 
listado de ventas del dia, es decir en un arreglo ventas Como 
se muestra a continuacion:


Nº Factura		Total de Factura ($)
1				28.5
0				0

c. Generar el cierre de caja del negocio. Para ello debera leer 
el arreglo ventas y contar cuantas ventas hubo, y sumar el total 
de las ventas, finalmente mostrar el resumen del cierre de caja.

********CIERRE DE CAJA********
Cantidad de facturas realizadas: 1
Recaudacion diaria: $28.5
******************************
*/

#include <stdio.h>
using namespace std;

void registrarVenta(float [7][3], float [3][2], float);
bool estaDisponible(float [7][3], float, float);
float buscarPrecio(float [7][3], float);
void calcularSubtotal(float [3][4]);
float calcularTotal(float [3][4]);
void mostrarFactura(float[3][4], float);
void cerrarCaja(float[3][2]);
void mostrarVentasDia(float[3][2]); // muestra todas las ventas

int main(int argc, char *argv[]) {
	
	float stock[7][3]={{1,10,50},{2,30,30},{3,1,10},{4,100,25},{5,20,0},{6,50.5,15},{7,5.5,5}};
	float ventas[3][2]={0}, num_fac=0;
	char op = ' ';
	do{
		printf("\n********************* MENU DE OPCIONES *******************");
		printf("\na. Registrar Venta.");
		printf("\nb. Mostrar Ventas.");
		printf("\nc. Cierre de Caja.");
		printf("\nOpcion:");
		scanf(" %c",&op);
		switch(op){
		case 'a': 
		case 'A': 
			num_fac++;
			registrarVenta(stock, ventas, num_fac);
			break;
		case 'b': 
		case 'B': 
			mostrarVentasDia(ventas);
			break;
		case 'c': 
		case 'C': 
			cerrarCaja(ventas);
			break;
		}
		printf("\n¿Desea seguir (S/N)?");
		scanf(" %c",&op);
	}while(op=='s' || op=='S');
	return 0;
}

void registrarVenta(float stock[7][3], float ventas[3][2], float num_fac){
	int i=0;
	float factura[3][4]={0}; // en cada venta se crea un nuevo arreglo.
	float codigo=0, cantidad=0;
	printf("\n******* Registrar Venta. [Codigo 0 para terminar] ********\n");
	do{		
		printf("Ingrese el codigo: ");
		scanf("%f",&codigo);
		if(codigo!=0){
			printf("Ingrese la cantidad: ");
			scanf("%f",&cantidad);
			if(estaDisponible(stock, codigo, cantidad)==true){
				factura[i][0]=codigo;
				factura[i][1]=cantidad;
				factura[i][2]=buscarPrecio(stock, codigo);
				i++;
			}else{
				printf("\nLo siento, no tenemos stock.");
			}
		}
	}while(codigo!=0);
	calcularSubtotal(factura);
	mostrarFactura(factura, num_fac);
	
	//pasar al arreglo ventas para el cierre de caja.
	ventas[(int)num_fac-1][0]=num_fac;
	ventas[(int)num_fac-1][1]=calcularTotal(factura);
}
	
bool estaDisponible(float stock[7][3], float codigo, float cantidad){
	bool bandera_disponible=false;
	for (int i=0; i<7; i++){
		if(stock[i][0]==codigo && stock[i][2]>=cantidad){ //solo si hay stock
			stock[i][2]=stock[i][2]-cantidad; 
			bandera_disponible=true;
		}
	}
	return bandera_disponible;
}

float buscarPrecio(float stock[7][3], float codigo){
	float precio=0;
	for (int i=0; i<7; i++){
		if(stock[i][0]==codigo){
			precio=stock[i][1];
		}
	}
	return precio;
}
	
void calcularSubtotal(float factura[3][4]){
	for (int i=0; i<3; i++){
		factura[i][3]=factura[i][1]*factura[i][2];
	}
}

float calcularTotal(float factura[3][4]){
	float total=0;
	for (int i=0; i<3; i++){
		total=total+factura[i][3];
	}
	return total;
}

void mostrarFactura(float factura[3][4], float num_fac){
	float pago=0;
	printf("\n************* Factura Nº %0.2f*******************",num_fac);
	printf("\nCod.\tCant.\tP.U($)\tSubtotal.($)\n");
	for (int i=0; i<3; i++){
		for (int j=0; j<4; j++){
			if(factura[i][0]!=0) // solo mostrara las filas con datos.
				printf("%0.2f\t",factura[i][j]);
		}
		printf("\n");
	}
	printf("\n\t\tTotal $%0.2f",calcularTotal(factura));
	printf("\n**********************************************************");
	printf("\nCon cuanto va abonar? $");
	scanf("%f",&pago);
	if(calcularTotal(factura)<pago)
		printf("\nVuelto $%0.2f",pago-calcularTotal(factura));
}

void mostrarVentasDia(float ventas[3][2]){
	printf("\n********************* VENTAS DEL DIA *********************");
	printf("\nN° Fac\t Total ($)\n");
	for (int i=0; i<3; i++){
		for (int j=0; j<2; j++){
			printf("%0.2f\t",ventas[i][j]);
		}
		printf("\n");
	}
	printf("\n**********************************************************");
}

void cerrarCaja(float ventas[3][2]){
	int cant_venta=0;
	float recaudacion=0;
	for (int i=0; i<3; i++){
		if(ventas[i][0]!=0){
			cant_venta++;
			recaudacion=recaudacion+ventas[i][1];
		}
	}
	printf("\n********************* CIERRE DE CAJA *********************");
	printf("\nCantidad de ventas realizadas: %d",cant_venta);
	printf("\nRecaudación diaria: $%0.2f",recaudacion);
	printf("\n**********************************************************");
}
