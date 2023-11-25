/* Crear una estructura llamada alumno con sus atributos persona (del anterior), 
y un arreglo de una dimension con las materias que cursa y otro arreglo de una 
dimension con las notas de los finales. (Ej. historial academico). 
Cargue con datos y luego muestrelos.

*/

#include <iostream>

struct fecha_nacimiento{
	int dia;
	int mes;
	int anio;
};

struct direccion
{
	std::string  calle;
	int  numero;
};

struct persona{
	std::string nombre;
	std::string apellido;
	struct fecha_nacimiento f; 
	struct direccion d;
	long long telefono;
};

struct alumno{
	struct persona p; 
	std::string  materia[4];
	int  nota_final[4];
};


int main() {
	
	struct alumno a;
	
	std::cout<<"Ingrese los datos de alumno/a: "<<std::endl;
	std::cout<<"Nombre: ";
	std::cin>>a.p.nombre;
	std::cout<<"Apellido: ";
	std::cin>>a.p.apellido;
	std::cout<<"Dia de nacimiento: ";
	std::cin>>a.p.f.dia;
	std::cout<<"Mes de nacimiento: ";
	std::cin>>a.p.f.mes;
	std::cout<<"Año de nacimiento: ";
	std::cin>>a.p.f.anio;
	std::cout<<"Calle: ";
	std::cin>>a.p.d.calle;
	std::cout<<"Numero: ";
	std::cin>>a.p.d.numero;
	std::cout<<"Telefono: ";
	std::cin>>a.p.telefono;
	std::cout<<"\nIngrese las materias y notas: "<<std::endl;
	for(int i=0; i<4;i++){
		std::cout<<"Materia "<<i+1<<": ";
		std::cin>>a.materia[i];
		std::cout<<"Nota Final "<<i+1<<": ";
		std::cin>>a.nota_final[i];
	}
	
	std::cout<<"\n\nDatos de alumno/a"<<std::endl;
	std::cout<<"Nombre y apellido: "<<a.p.nombre<<" "<<a.p.apellido<<std::endl;
	std::cout<<"Fecha de nacimiento: "<<a.p.f.dia<<"/"<<a.p.f.mes<<"/"<<a.p.f.anio<<std::endl;
	std::cout<<"Direccion: "<<a.p.d.calle<<" "<<a.p.d.numero<<std::endl;
	std::cout<<"Telefono: "<<a.p.telefono<<std::endl;
	std::cout<<"\nHistorial academico: "<<std::endl;
	for(int i=0; i<4;i++){
		std::cout<<a.materia[i]<<"\t\t"<<a.nota_final[i]<<std::endl;
	}
	
	
	return 0;
}

