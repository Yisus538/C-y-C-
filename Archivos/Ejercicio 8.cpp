/*Escribir un programa que tenga un menu de opciones, cada una de ellas una funcion: 
a. Cargar lista de productos en el archivo. 
b. Leer la lista de productos del archivo. 
Para ello debera crear una clase Producto con los siguientes atributos: nombre del 
producto, marca, precio unitario, fecha de elaboracion, tamanio.
Luego crear un vector de objetos "Producto" y de tamanio 3. 
El archivo se llamara Listado_Producto.txt.*/ 


#include <iostream>
#include <fstream>
#include "Producto.h"

void mostrarListado(Producto[3]);
void escribir_Archivo(Producto [3]);
void actualizar_Archivo(Producto [3]);
void leerArchivo(Producto [3]);

int main(){
	Producto p;
	Producto listaProducto[3];
	
	//cargar el listado
	p.setNombre("gaseosa");
	p.setMarca("coca cola");
	p.setPrecio(200);
	p.setFecha_elaboracion("12/03/2021");
	p.setTamanio(1);
	listaProducto[0]=p;

	p.setNombre("yerba");
	p.setMarca("Cbse");
	p.setPrecio(150);
	p.setFecha_elaboracion("10/08/2021");
	p.setTamanio(1);
	listaProducto[1]=p;
	
	p.setNombre("harina");
	p.setMarca("Blancaflor");
	p.setPrecio(80);
	p.setFecha_elaboracion("04/09/2021");
	p.setTamanio(2);
	listaProducto[2]=p;
	
	
	mostrarListado(listaProducto);
	//menu de opciones

	char op=' ';
	do{
		cout<<"\n-----------------------------------------------------"<<endl;
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"a.Escribir archivo."<<endl;
		cout<<"b.Actualizar archivo."<<endl;
		cout<<"c.Leer archivo."<<endl;
		cout<<"\nSeleccione una opcion:"<<endl;
		cin>>op;
		switch(op){
		case 'a':
			escribir_Archivo(listaProducto);
			break;
		case 'b':
			actualizar_Archivo(listaProducto);
			break;
		case 'c':
			leerArchivo(listaProducto);
			break;
		}
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>op;
	}while(op=='s' || op=='S');
	
	return 0;
}

	

void mostrarListado(Producto listaProducto[3]){
	cout<<"\n-----------------------------------------------------"<<endl;
	cout<<"Listado de Productos \n";
	cout<<"Nombre, Marca, Precio, Fecha Ela., Tamanio"<<endl;
	for(int i=0;i<3;i++){
		cout<<listaProducto[i].toString()<<endl;
	}
}	

void escribir_Archivo(Producto listaProducto[3] ){
	cout<<"\n--------------- Escribiendo el archivo --------------"<<endl;
	ofstream ofs; 
	ofs.open("Lista_productos.txt"); 
	ofs<<"Nombre, Marca, Precio, Fecha Ela., Tamanio"<<endl;
	for(int i=0; i<3;i++){
		ofs<<listaProducto[i].toString()<<"\n";
	}
	ofs.close(); 
}
	
void actualizar_Archivo(Producto listaProducto[3] ){
	//agregando texto
	cout<<"\n--------------- Actualizar el archivo --------------"<<endl;
	ofstream ofs; 	
	ofs.open("Lista_productos.txt", std::ios::out | std::ios::app);
	ofs<<"pasas de uva, ninguna, 80, 25/07/2021, 3"<<endl;
	ofs.close(); 
}
			
void leerArchivo(Producto listaProducto[3]){
	cout<<"\n--------------- Leyendo el archivo --------------"<<endl;
	string mensaje=" ";
	ifstream ifs; 
	ifs.open("Lista_productos.txt"); 
	while(!ifs.eof()) { 
		getline(ifs,mensaje); 
		cout<<mensaje<<endl;
	}
	ifs.close();
}
