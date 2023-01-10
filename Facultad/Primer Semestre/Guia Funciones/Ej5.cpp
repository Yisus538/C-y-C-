/*Programe un sistema de facturacion, donde emita las facturas de un negocio. 
Para ello primero debera cargar los siguientes datos por cada articulo (codigo, 
precio unitario y cantidad) en un arreglo (maximo 5 filas)

Codigo	Precio Unitario	Cantidad	Subtotal
1	4	2	8
2	2	1	2
3	1	3	4
Una vez, cargado todos los arti­culos en la factura , el programa calculara
cada uno de los subtotales y el total del monto a abonar por el cliente. Luego, 
el sistema solicita que se ingrese la forma de pago (efectivo, debito o tarjeta). 
Si es efectivo y este no es pago exacto, el programa debera calcular el vuelto, 
y en el caso de la tarjeta de credito calcular y sumar el recargo del 5%. 
Finalmente mostrar la factura.    

Nota. Recordar que los arreglos se definen con un solo tipo de dato, con lo 
cual en este caso el arreglo sera del tipo float.
*/

#include <stdio.h>
using namespace std;

void calcularSubtotal(float [5][4]);
float calcularTotal(float [5][4]);
void mostrarFactura(float [5][4]);
void formaPago(float);

int main(int argc, char *argv[]) {
	
	float factura[5][4]={0};
	printf("FACTURACION\n");
	for(int i=0; i<5;i++){
		factura[5][0]=i+1;
		printf("\nCód. %d\n", (i+1));
		printf("Precio Unitario: $");
		scanf("%f",&factura[i][1]);
		printf("Cantidad: ");
		scanf("%f",&factura[i][2]); 
	}
	mostrarFactura(factura);
	formaPago(calcularTotal(factura));
	
	return 0;
}

void calcularSubtotal(float factura[5][4]){
	for(int i=0; i<5;i++){
		factura[i][3]=factura[i][1]*factura[i][2];
	}
	
}
float calcularTotal(float factura[5][4]){
	float total=0;
	for(int i=0; i<5;i++){
		total=total+factura[i][3];
	}
	return total;
}
void mostrarFactura(float factura[5][4]){
	calcularSubtotal(factura);
	printf("\n----------------------------------------------");
	printf("\nCod.\tP.U.\tCant.\tSubtotal\n");
	for(int i=0; i<5;i++){
		for(int j=0; j<4;j++){
			printf("%0.2f\t",factura[i][j]);
		}
		printf("\n");
	}
	printf("\nTotal $%0.2f",calcularTotal(factura));
	printf("\n----------------------------------------------");
}

void formaPago(float total){
	char op=' ';
	float dinero=0, vuelto=0;
	printf("\n\nIngrese la forma de pago: ");
	printf("\nE-Efectivo\nD-Debito\nT-Tarjeta\n");
	scanf(" %c", &op);
	printf("\n----------------------------------------------");
	switch(op){
	case 'E':
		printf("\nUd. debe abonar $%0.2f", total);
		printf("\nCon cuanto a pagar $ ");
		scanf("%f", &dinero);
		vuelto=dinero-total;
		if(vuelto!=0)
			printf("\nSu vuelto $%0.2f",vuelto);
		break;
	case 'D':
		printf("\nUd. debe abonar $%0.2f",total);
		break;
	case 'T':
		printf("\nTiene un recargo del 5%%. ");
		printf("\nUd. debe abonar $%0.2f", (total*1.05));
		break;
	}
	printf("\n----------------------------------------------");
	printf("\nMuchas gracias por su compra.");
	printf("\n----------------------------------------------");
}
