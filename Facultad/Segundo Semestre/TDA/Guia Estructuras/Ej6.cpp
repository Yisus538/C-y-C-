/* Crear una estructura llamada alumno con sus atributos persona (del anterior), 
y un arreglo de una dimension con las materias que cursa y otro arreglo de una 
dimension con las notas de los finales. (Ej. historial academico). 
Cargue con datos y luego muestrelos.

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

struct alumno
{
	struct persona p; 
	string  materia[4];
	int  nota_final[4];
};


int main(int argc, char *argv[]) {
	
	struct alumno a;
	
	cout<<"Ingrese los datos de alumno/a: "<<endl;
	cout<<"Nombre: ";
	cin>>a.p.nombre;
	cout<<"Apellido: ";
	cin>>a.p.apellido;
	cout<<"Dia de nacimiento: ";
	cin>>a.p.f.dia;
	cout<<"Mes de nacimiento: ";
	cin>>a.p.f.mes;
	cout<<"Año de nacimiento: ";
	cin>>a.p.f.anio;
	cout<<"Calle: ";
	cin>>a.p.d.calle;
	cout<<"Numero: ";
	cin>>a.p.d.numero;
	cout<<"Telefono: ";
	cin>>a.p.telefono;
	cout<<"\nIngrese las materias y notas: "<<endl;
	for(int i=0; i<4;i++){
		cout<<"Materia "<<i+1<<": ";
		cin>>a.materia[i];
		cout<<"Nota Final "<<i+1<<": ";
		cin>>a.nota_final[i];
	}
	
	cout<<"\n\nDatos de alumno/a"<<endl;
	cout<<"Nombre y apellido: "<<a.p.nombre<<" "<<a.p.apellido<<endl;
	cout<<"Fecha de nacimiento: "<<a.p.f.dia<<"/"<<a.p.f.mes<<"/"<<a.p.f.anio<<endl;
	cout<<"Direccion: "<<a.p.d.calle<<" "<<a.p.d.numero<<endl;
	cout<<"Telefono: "<<a.p.telefono<<endl;
	cout<<"\nHistorial academico: "<<endl;
	for(int i=0; i<4;i++){
		cout<<a.materia[i]<<"\t\t"<<a.nota_final[i]<<endl;
	}
	
	
	return 0;
}

