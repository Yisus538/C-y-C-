/* Eje anterior
4. Crear una estructura llamada persona con sus atributos nombre, apellido, 
fecha de nacimiento, dirección y teléfono. Tanto la dirección como la 
fecha de nacimiento son otras estructuras (estructura anidada). Cargue con 
datos y luego muéstrelos.

5. Tomar el ejercicio anterior y modificarlo para que se cree un vector de 
estructuras de tamaño 5. Cargar valores y mostrar. 
*/

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
	struct fecha_nacimiento f;
	struct direccion d;
	long long telefono;
};


int main(int argc, char *argv[]) {
	
	struct persona p[2];
	int i=0;
	
	cout<<"Ingrese los datos de las personas: "<<endl;
	for(i=0; i<2; i++){
		cout<<"\nNombre: ";
		cin>>p[i].nombre;
		cout<<"Apellido: ";
		cin>>p[i].apellido;
		cout<<"Dia de nacimiento: ";
		cin>>p[i].f.dia;
		cout<<"Mes de nacimiento: ";
		cin>>p[i].f.mes;
		cout<<"Año de nacimiento: ";
		cin>>p[i].f.anio;
		cout<<"Calle: ";
		cin>>p[i].d.calle;
		cout<<"Numero: ";
		cin>>p[i].d.numero;
		cout<<"Telefono: ";
		cin>>p[i].telefono;
	}
	
	cout<<"\n\nDatos de Persona"<<endl;
	for(i=0; i<2; i++){
		cout<<"\nNombre y apellido: "<<p[i].nombre<<" "<<p[i].apellido<<endl;
		cout<<"Fecha de nacimiento: "<<p[i].f.dia<<"/"<<p[i].f.mes<<"/"<<p[i].f.anio<<endl;
		cout<<"Direccion: "<<p[i].d.calle<<" "<<p[i].d.numero<<endl;
		cout<<"Telefono: "<<p[i].telefono<<endl;
	}
	
	return 0;
}

