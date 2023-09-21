/*Escribir un programa que cree una estructura llamada "Producto", y que contenga los 
siguientes datos (nombre del producto, marca, precio unitario, fecha de elaboracion, tamanio) 
y lo guarde en un archivo con el nombre Datos_Producto_Estructura.txt*/


#include <iostream> 
#include <fstream>
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
	cout<<"Tama�o: ";
	cin>>p.tam;
	
	
	
	ofstream ofs; 
	ofs.open("Datos_Producto_Estructura.txt");
	
	ofs<<"Datos del producto: "<<endl;
	ofs<<"Nombre: "<<p.nombre<<endl;
	ofs<<"Marca: "<<p.marca<<endl;
	ofs<<"Precio Unitario: "<<p.preciou<<endl;
	ofs<<"Fecha: "<<p.fecha<<endl;
	ofs<<"Tama�o: "<<p.tam<<endl;
	ofs.close(); 
	
	
	string lista=" ";
	ifstream ifs; 
	ifs.open("Datos_Producto_Estructura.txt"); 
	while(!ifs.eof()) { 
		getline(ifs,lista); 
		cout<<lista<<endl;
	}
	ifs.close(); 
	
	return 0;
}

