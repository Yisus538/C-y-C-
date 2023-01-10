/*Crear un programa que gestione el listado de los empleados de la empresa. 
Para ello crear una estructura Empleado, en la cual contenga los siguientes 
datos: legajo, puesto de trabajo, sueldo y anios_antiguedad. Luego, crear un 
vector de estructuras del tipo empleado de tamanio 3. Crear un menu que 
permita las opciones: 

a. agregar un empleado
b. mostrar todos los empleados
c. buscar un empleado por legajo para ver si existe o no.
d. actualizarSueldo(float porcentaje)
e. ordenar por sueldo
f. ordenar por anios_antiguedad
*/

#include <iostream>
using namespace std;


struct empleado
{
	int legajo;
	string puesto;
	float sueldo;
	int anios_antiguedad;
};

void agregar(empleado[3]);
void mostrar(empleado[3]);
string existe_legajo(empleado[3]);
void actualizarSueldo(empleado[3]);
void ordenarSueldo(int ,empleado[3]);
void ordenarAntiguedad(int ,empleado[3]);

int main(int argc, char *argv[]) {
	
	struct empleado lista[3]; 
	
	char op=' ';

	do{
		cout<<"---------------------------------------------------"<<endl;
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"a. Agregar.\nb. Mostrar.\nc. Buscar.\nd. Actualizar Sueldo.\ne. Ordenar por Sueldo.\nf. Ordenar por Anios de Antiguedad.\n";
		cin>>op;
		switch(op){
		case 'a': 
			agregar(lista);
			break;
		case 'b':
			mostrar(lista);
			break;
		case 'c':
			cout<<existe_legajo(lista);
			break;
		case 'd':
			actualizarSueldo(lista);
			mostrar(lista);
			break;
		case 'e':
			ordenarSueldo(3 ,lista);
			mostrar(lista);
			break;
		case 'f':
			ordenarAntiguedad(3, lista);
			mostrar(lista);
			break;
		}
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>op;
		
	}while(op=='s' || op=='S');
	
	return 0;
}

void agregar(empleado lista[3]){
	cout<<"---------------------------------------------------"<<endl;
	for(int i=0; i<3; i++){
		cout<<"\nINGRESE LOS DATOS DE EMPLEADO Nº"<<i+1<<": "<<endl;
		cout<<"legajo: ";
		cin>>lista[i].legajo;
		cout<<"Puesto: ";
		cin>>lista[i].puesto;
		cout<<"Sueldo: ";
		cin>>lista[i].sueldo;
		cout<<"Anios de antiguedad: ";
		cin>>lista[i].anios_antiguedad;
		
	}
}

void mostrar(empleado lista[3]){
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Leg.\tPuesto\t\tSueldo\t\tAntiguedad"<<endl;
	for(int i=0; i<3; i++){
		cout<<lista[i].legajo<<"\t"<<lista[i].puesto<<"\t\t"<<lista[i].sueldo<<"\t\t"<<lista[i].anios_antiguedad<<endl;
	}	
}

string existe_legajo(empleado lista[3]){
	cout<<"---------------------------------------------------"<<endl;
	int buscar_legajo=0;
	bool bandera_encontrado=false;
	string respuesta=" ";
	cout<<"INGRESE EL LEGAJO A BUSCAR: "<<endl;
	cin>>buscar_legajo;
	for(int i=0; i<3; i++){
		if(buscar_legajo==lista[i].legajo){
			bandera_encontrado=true;
		}
	}
	if(bandera_encontrado==true){
		respuesta="LEGAJO ENCONTRADO";
	}else{
		respuesta="LEGAJO NO ENCONTRADO";
	}
	return respuesta;
}
	
void actualizarSueldo(empleado lista[3]){
	float porcentaje=0;
	cout<<"Ingrese el porcentaje de aumento de sueldo: %"<<endl;
	cin>>porcentaje;
	
	for(int i=0; i<3; i++){
		lista[i].sueldo=lista[i].sueldo+((porcentaje*lista[i].sueldo)/100);
	}	
}

void ordenarSueldo(int tamano, empleado lista[3]) {
	//orden ascendente
	int i=0, j=0;
	empleado e;
	for (i=0; i<tamano-1; i++) { //nº de comparaciones
		for (j=0 ; j<tamano - 1; j++) {
			//compara los elementos adyacentes y los intercambia
			if (lista[j].sueldo > lista[j+1].sueldo) {
				e = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = e;
			}
		}
	}
}

void ordenarAntiguedad(int tamano, empleado lista[3]) {
	//orden descendente
	int i=0, j=0;
	empleado e;
	for (i=0; i<tamano; i++) { 
		for (j=0 ; j<tamano - 1; j++) { //el tamaño debe restarse 1
			if (lista[j].anios_antiguedad < lista[j+1].anios_antiguedad) {
				e = lista[j+1];
				lista[j+1] = lista[j];
				lista[j] = e;
			}
		}
	}
}

