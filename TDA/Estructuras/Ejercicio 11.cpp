/* Eje anterior
4. Crear una estructura llamada persona con sus atributos nombre, apellido, 
fecha de nacimiento, dirección y teléfono. Tanto la dirección como la 
fecha de nacimiento son otras estructuras (estructura anidada). Cargue con 
datos y luego muéstrelos.

5. Tomar el ejercicio anterior y modificarlo para que se cree un vector de 
estructuras de tamaño 5. Cargar valores y mostrar. 
*/

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

struct persona
{
	std::string nombre;
	std::string apellido;
	struct fecha_nacimiento f;
	struct direccion d;
	long long telefono;
};


int main() {
	
	struct persona p[2];
	int i=0;
	
	std::cout<<"Ingrese los datos de las personas: "<<std::endl;
	for(i=0; i<2; i++){
		std::cout<<"\nNombre: ";
		std::cin>>p[i].nombre;
		std::cout<<"Apellido: ";
		std::cin>>p[i].apellido;
		std::cout<<"Dia de nacimiento: ";
		std::cin>>p[i].f.dia;
		std::cout<<"Mes de nacimiento: ";
		std::cin>>p[i].f.mes;
		std::cout<<"Año de nacimiento: ";
		std::cin>>p[i].f.anio;
		std::cout<<"Calle: ";
		std::cin>>p[i].d.calle;
		std::cout<<"Numero: ";
		std::cin>>p[i].d.numero;
		std::cout<<"Telefono: ";
		std::cin>>p[i].telefono;
	}
	
	std::cout<<"\n\nDatos de Persona"<<std::endl;
	for(i=0; i<2; i++){
		std::cout<<"\nNombre y apellido: "<<p[i].nombre<<" "<<p[i].apellido<<std::endl;
		std::cout<<"Fecha de nacimiento: "<<p[i].f.dia<<"/"<<p[i].f.mes<<"/"<<p[i].f.anio<<std::endl;
		std::cout<<"Direccion: "<<p[i].d.calle<<" "<<p[i].d.numero<<std::endl;
		std::cout<<"Telefono: "<<p[i].telefono<<std::endl;
	}
	
	return 0;
}

