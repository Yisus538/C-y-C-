/*Escribir un programa que solicite los datos de un producto (nombre del producto, marca, 
precio unitario, fecha de elaboracion, tamanio) y lo guarde en un archivo con el nombre 
Datos_Producto.txt*/

#include <iostream>
#include <fstream> 


int main() {
	std::string lista="";
	
	std::ofstream ofs; //creo la libreria ofstream
	ofs.open("Datos_Producto.txt"); //Abro un archivo, sino existe se crea.
	//Ingreso por teclado
	std::cout<<"nombre del producto/ marca/ precio unitario($)/ fecha de elaboración(00-00-00)/ tamaño(cm): [fin = '.']"<<std::endl;   
	getline(std::cin, lista, '.');
	
	//Escribir el archivo con el mensaje
	ofs <<"Mensaje: "<<std::endl; 
	ofs<<lista<<std::endl;
	ofs.close();  //Cierra
	
	//Leer 
	lista=" ";
	std::ifstream ifs; //objeto libreria ifstream
	ifs.open("Datos_Producto.txt"); //abrir
	std::cout << "\nContenido del Archivo"<<std::endl;
	while(!ifs.eof()) { //recorre el bucle
		getline(ifs,lista); //saca el mensaje
		std::cout<<lista<<std::endl; //lo muestra en pantalla
	}
	ifs.close(); //Cierra
	return 0;
}
