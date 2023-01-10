/*4. Crear una estructura llamada persona con sus atributos nombre, apellido, 
fecha de nacimiento, dirección y teléfono. Tanto la dirección como la fecha de 
nacimiento son otras estructuras (estructura anidada). Cargue con datos y 
luego muéstrelos.*/

#include <iostream>
using namespace std;

struct fecha_nacimiento
{
	int dia;
	int mes;
	int anio;
};

struct direccion
{
	string  calle;
	int  numero;
};

struct persona
{
	string nombre;
	string apellido;
	struct fecha_nacimiento f; //deben estar creadas anteriormente
	struct direccion d;
	long long telefono;
};

int main(int argc, char *argv[]) {
	
	struct persona p;
	
	cout<<"Ingrese los datos de persona: "<<endl;
	cout<<"Nombre: ";
	cin>>p.nombre;
	cout<<"Apellido: ";
	cin>>p.apellido;
	cout<<"Dia de nacimiento: ";
	cin>>p.f.dia;
	cout<<"Mes de nacimiento: ";
	cin>>p.f.mes;
	cout<<"Año de nacimiento: ";
	cin>>p.f.anio;
	cout<<"Calle: ";
	cin>>p.d.calle;
	cout<<"Numero: ";
	cin>>p.d.numero;
	cout<<"Telefono: ";
	cin>>p.telefono;
	
	
	cout<<"\n\nDatos de Persona"<<endl;
	cout<<"Nombre y apellido: "<<p.nombre<<" "<<p.apellido<<endl;
	cout<<"Fecha de nacimiento: "<<p.f.dia<<"/"<<p.f.mes<<"/"<<p.f.anio<<endl;
	cout<<"Direccion: "<<p.d.calle<<" "<<p.d.numero<<endl;
	cout<<"Telefono: "<<p.telefono<<endl;
	
	return 0;
}

