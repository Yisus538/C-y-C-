/*Crear una estructura llamada producto con los siguientes atributos codigo, 
nombre, stock, cantidad vendida. Crear un vector de estructuras del tipo 
producto (max 10). Luego crear un menu de opciones: 

a. mostrar todos los productor
b. cargar una venta (debe buscar y restar el stock y sumar la cant vendida)
c. reponer mercaderia (debe buscar y sumar el stock)
d. ordenar por productos mas vendidos
e. ordenar por productor con menor stock

Utilice funciones.
*/


#include <iostream>
#include <string>

#define tamano 10

using namespace std;

struct producto
{
	int codigo;
	string nombre;
	int stock;
	int cant_vendida;
};

void mostrar(producto[tamano]);
void vender(producto[tamano]);
void reponer(producto[tamano]);
void ordenar_mas_vendido(producto[tamano]);
void ordenar_menos_stock(producto[tamano]);

int main(int argc, char *argv[]) {
	
	struct producto lista_producto[tamano];
	char op=' ', rta=' ';
	
	lista_producto[0]={1, "resma", 10, 1};
	lista_producto[1]={2, "lapiz", 8, 14};
	lista_producto[2]={3, "goma", 12, 10};
	lista_producto[3]={4, "fibra", 3, 6};
	lista_producto[4]={5, "pincel", 12, 1};
	lista_producto[5]={6, "carpeta", 10, 2};
	lista_producto[6]={7, "acrili.", 31, 10};
	lista_producto[7]={8, "cinta", 11, 2};
	lista_producto[8]={9, "cartul.", 20, 15};
	lista_producto[9]={10, "afiche", 12, 0};
	
	do{
		
		cout<<"*****************MENU DE OPCIONES*****************"<<endl;
		cout<<"a. mostrar todos los productos"<<endl;
		cout<<"b. cargar una venta"<<endl;
		cout<<"c. reponer mercaderia"<<endl;
		cout<<"d. ordenar por productos mas vendidos"<<endl;
		cout<<"e. ordenar por productor con menor stock"<<endl;
		cin>>op;
		cout<<"**************************************************\n\n";
		switch(op){
		case 'a': 
		case 'A': 
			mostrar(lista_producto);
			break;
		case 'b':
		case 'B':
			vender(lista_producto);
			break;
		case 'c':
		case 'C': 
			reponer(lista_producto);
			break;
		case 'd':
		case 'D': 
			ordenar_mas_vendido(lista_producto);
			cout<<"\nLista ordenada por los productos mas vendidos\n";
			mostrar(lista_producto);
			break;
		case 'e':
		case 'E': 
			ordenar_menos_stock(lista_producto);
			cout<<"\nLista ordenada por los productos con menos stock\n";
			mostrar(lista_producto);
			break;
		}
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>rta;
		cout<<"\n\n";
	}while(rta=='s' || rta=='S');
	
	
	return 0;
}

void mostrar(producto lista_producto[tamano]){
	cout<<"Cod.\tNombre\t\tStock\t\tCant Vendida"<<endl;
	for(int i=0; i<tamano; i++){
		cout<<lista_producto[i].codigo<<"\t"<<lista_producto[i].nombre<<"\t\t"<<lista_producto[i].stock<<"\t\t"<<lista_producto[i].cant_vendida<<endl;
	}	
}

void vender(producto lista_producto[tamano]){
	string nombre_producto=" ";
	int cantidad=0;
	bool bandera=false;
	cout<<"Ingrese el nombre del producto vendido: ";
	cin>>nombre_producto;
	for(int i=0; i<tamano; i++){
		if(nombre_producto.compare(lista_producto[i].nombre)==0){
			cout<<"Ingrese la cantidad vendida: ";
			cin>>cantidad;
			if(lista_producto[i].stock>=cantidad){
				lista_producto[i].stock=lista_producto[i].stock-cantidad;
				lista_producto[i].cant_vendida=lista_producto[i].cant_vendida+cantidad;
			}else{
				cout<<"Lo siento, no hay stock suficiente de "<<nombre_producto<<"."<<endl;
			}
			bandera=true;
		}
	}
	if(bandera==false){
		cout<<"Lo siento, el producto "<<nombre_producto<<" no ha sido encontrado. "<<endl;
	}
}

void reponer(producto lista_producto[tamano]){
	string nombre_producto=" ";
	int cantidad=0;
	bool bandera=false;
	cout<<"Ingrese el nombre del producto a reponer: ";
	cin>>nombre_producto;
	for(int i=0; i<tamano; i++){
		if(nombre_producto.compare(lista_producto[i].nombre)==0){
			cout<<"Ingrese la cantidad que ingresa a stock: ";
			cin>>cantidad;
			if(cantidad>0){
				lista_producto[i].stock=lista_producto[i].stock+cantidad;
			}else{
				cout<<"Lo siento, la cantidad a reponer debe ser mayor a cero."<<endl;
			}
			bandera=true;
		}
	}
	if(bandera==false){
		cout<<"Lo siento, el producto "<<nombre_producto<<" no ha sido encontrado. "<<endl;
	}
}

void ordenar_mas_vendido(producto lista_producto[tamano]){
	int i=0, j=0;
	producto aux;
	for(i=0; i<tamano; i++){
		for(j=0; j<tamano-1; j++){ //el tamaño debe restarse 1
			if(lista_producto[j].cant_vendida<lista_producto[j+1].cant_vendida){
				aux=lista_producto[j+1];
				lista_producto[j+1]=lista_producto[j];
				lista_producto[j]=aux;
			}
		} 
	}
}
	
void ordenar_menos_stock(producto lista_producto[tamano]){
	//orden ascendente
	int i=0, j=0;
	producto aux;
	for (i=0; i<tamano-1; i++) { //nº de comparaciones
		for (j=0 ; j<tamano - 1; j++) {
			//compara los elementos adyacentes y los intercambia
			if (lista_producto[j].stock > lista_producto[j+1].stock) {
				aux = lista_producto[j];
				lista_producto[j] = lista_producto[j+1];
				lista_producto[j+1] = aux;
			}
		}
	}
}

	

