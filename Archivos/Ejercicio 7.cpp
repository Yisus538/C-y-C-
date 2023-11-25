/*Escribir un programa que cree una estructura llamada "Producto", y que contenga los 
siguientes datos (nombre del producto, marca, precio unitario, fecha de elaboracion, tamanio) 
y lo guarde en un archivo con el nombre Datos_Producto_Estructura.txt*/


#include <iostream> 
#include <fstream>

struct producto
{
	std::string nombre;
	std::string marca;
	std::string preciou;
	std::string fecha;
	long tam;
};


int main(int argc, char *argv[]) {
	struct producto p;
	std::cout<<"Ingrese los siguientes datos del producto: "<<std::endl;
	std::cout<<"Nombre del preducto: ";
	std::cin>>p.nombre;
	std::cout<<"Marca: ";
	std::cin>>p.marca;
	std::cout<<"Precio unitario: ";
	std::cin>>p.preciou;
	std::cout<<"Fecha: ";
	std::cin>>p.fecha;
	std::cout<<"Tama�o: ";
	std::cin>>p.tam;
	
	
	
	std::ofstream ofs; 
	ofs.open("Datos_Producto_Estructura.txt");
	
	ofs<<"Datos del producto: "<<std::endl;
	ofs<<"Nombre: "<<p.nombre<<std::endl;
	ofs<<"Marca: "<<p.marca<<std::endl;
	ofs<<"Precio Unitario: "<<p.preciou<<std::endl;
	ofs<<"Fecha: "<<p.fecha<<std::endl;
	ofs<<"Tama�o: "<<p.tam<<std::endl;
	ofs.close(); 
	
	
	std::string lista=" ";
	std::ifstream ifs; 
	ifs.open("Datos_Producto_Estructura.txt"); 
	while(!ifs.eof()) { 
		getline(ifs,lista); 
		std::cout<<lista<<std::endl;
	}
	ifs.close(); 
	
	return 0;
}

