/*4. Crear una estructura llamada persona con sus atributos nombre, apellido, 
fecha de nacimiento, dirección y teléfono. Tanto la dirección como la fecha de 
nacimiento son otras estructuras (estructura anidada). Cargue con datos y 
luego muéstrelos.*/

#include <iostream>

struct fecha_nacimiento{
	int dia;
	int mes;
	int anio;
};

struct direccion{
	std::string  calle;
	int  numero;
};

struct persona{
	std::string nombre;
	std::string apellido;
	struct fecha_nacimiento f; //deben estar creadas anteriormente
	struct direccion d;
	long long telefono;
};

int main() {
	
	struct persona p;
	
	std::cout<<"Ingrese los datos de persona: "<<std::endl;
	std::cout<<"Nombre: ";
	std::cin>>p.nombre;
	std::cout<<"Apellido: ";
	std::cin>>p.apellido;
	std::cout<<"Dia de nacimiento: ";
	std::cin>>p.f.dia;
	std::cout<<"Mes de nacimiento: ";
	std::cin>>p.f.mes;
	std::cout<<"Año de nacimiento: ";
	std::cin>>p.f.anio;
	std::cout<<"Calle: ";
	std::cin>>p.d.calle;
	std::cout<<"Numero: ";
	std::cin>>p.d.numero;
	std::cout<<"Telefono: ";
	std::cin>>p.telefono;
	
	
	std::cout<<"\n\nDatos de Persona"<<std::endl;
	std::cout<<"Nombre y apellido: "<<p.nombre<<" "<<p.apellido<<std::endl;
	std::cout<<"Fecha de nacimiento: "<<p.f.dia<<"/"<<p.f.mes<<"/"<<p.f.anio<<std::endl;
	std::cout<<"Direccion: "<<p.d.calle<<" "<<p.d.numero<<std::endl;
	std::cout<<"Telefono: "<<p.telefono<<std::endl;
	
	return 0;
}

