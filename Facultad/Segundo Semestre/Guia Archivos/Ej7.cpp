/*Escribir un programa que cree una estructura llamada "Producto", y que contenga los 
siguientes datos (nombre del producto, marca, precio unitario, fecha de elaboracion, tamanio) 
y lo guarde en un archivo con el nombre Datos_Producto_Estructura.txt*/


#include <iostream> //libreria de entrada y salida por pantalla
#include <fstream> //libreria para manejo de archivos
using namespace std;

struct producto
{
	string nombre;
	string marca;
	string preciou;
	string fecha;
	long tam;
};


int main(int argc, char *argv[]) {
	struct producto p;
	cout<<"Ingrese los siguientes datos del producto: "<<endl;
	cout<<"Nombre del preducto: ";
	cin>>p.nombre;
	cout<<"Marca: ";
	cin>>p.marca;
	cout<<"Precio unitario: ";
	cin>>p.preciou;
	cout<<"Fecha: ";
	cin>>p.fecha;
	cout<<"Tamaño: ";
	cin>>p.tam;
	
	
	//Escribir un archivo con los datos
	ofstream ofs; //creo un objeto de la libreria ofstream
	ofs.open("Datos_Producto_Estructura.txt"); //Abro un archivo, sino existe se crea.
	
	ofs<<"Datos del producto: "<<endl;
	ofs<<"Nombre: "<<p.nombre<<endl;
	ofs<<"Marca: "<<p.marca<<endl;
	ofs<<"Precio Unitario: "<<p.preciou<<endl;
	ofs<<"Fecha: "<<p.fecha<<endl;
	ofs<<"Tamaño: "<<p.tam<<endl;
	ofs.close(); 
	
	//Leer el archivo
	string lista=" ";
	ifstream ifs; //creo un objeto de la libreria ifstream
	ifs.open("Datos_Producto_Estructura.txt"); //abro el archivo
	while(!ifs.eof()) { //recorre el archivo hasta que llega al fin de linea
		getline(ifs,lista); 
		cout<<lista<<endl;
	}
	ifs.close(); //Cierro el archivo
	
	return 0;
}

