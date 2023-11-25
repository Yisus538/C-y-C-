/*Implementar en C un programa que maneje un array de estructuras para almacenar 
las fechas de cumpleaños de 20 amigos. Los datos a almacenar sobre cada amigo 
son nombre, dia, mes y año. El programa debe indicarnos cuantos de nuestros 
amigos cumplen los años un di­a y mes determinados introducidos por teclado. */

#include <iostream>
#include <ctime>
#define tamano 5

struct amigo{
	std::string nombre;
	int dia;
	int mes;
	int anio;
};

void cargar_datos(amigo [tamano]);
void cargar_datos_por_defecto(amigo[tamano]);
void mostrar(amigo[tamano]);
void mostrar_cumple_fecha_determinada(amigo[tamano]);
void mostrar_cumple_fecha_hoy(amigo[tamano]);

int main() {
	
	struct amigo lista[tamano];
	
	//cargar_datos(lista);
	cargar_datos_por_defecto(lista);
	mostrar(lista);
	mostrar_cumple_fecha_determinada(lista);
	mostrar_cumple_fecha_hoy(lista);

	return 0;
}

void cargar_datos(amigo lista[tamano]){
	std::cout<<"Carga de datos\n"<<std::endl;
	for(int i=0; i<tamano; i++){
		std::cout<<"Nombre: ";
		std::cin>>lista[i].nombre;
		std::cout<<"Dia: ";
		std::cin>>lista[i].dia;
		std::cout<<"Mes: ";
		std::cin>>lista[i].mes;
		std::cout<<"Año: ";
		std::cin>>lista[i].anio;
	}
}

void cargar_datos_por_defecto(amigo lista[tamano]){
	lista[0]={"Rodrigo", 21, 9, 1980};
	lista[1]={"Laura", 27, 2, 1986};
	lista[2]={"Santigo", 9, 7, 1990};
	lista[3]={"Marcela", 27, 2, 1987};
	lista[4]={"Anabel", 21, 9, 1996};
	
}
	
void mostrar(amigo lista[tamano]){
	std::cout<<"\nAmigo\t\tFecha de cumple"<<std::endl;
	for(int i=0; i<tamano; i++){
		std::cout<<lista[i].nombre<<"\t\t"<<lista[i].dia<<"/"<<lista[i].mes<<"/"<<lista[i].anio<<std::endl;
	}
	std::cout<<"\n-------------------------------------------------------------------------------\n";
}

void mostrar_cumple_fecha_determinada(amigo lista[tamano]){
	int dia=0, mes=0;
	bool bandera=false;
	std::cout<<"\nIngrese el dia y mes que desea saber si hay cumpleaños: "<<std::endl;
	std::cin>>dia>>mes;

	for(int i=0; i<tamano; i++){
		if(lista[i].dia==dia && lista[i].mes==mes){
			std::cout<<lista[i].nombre<<"\t\t"<<lista[i].dia<<"/"<<lista[i].mes<<"/"<<lista[i].anio<<std::endl;
			bandera=true;
		}
	}
	if(bandera==false){
		std::cout<<"\nLo siento, no hay nadie que cumpla el dia "<<dia<<" y el mes "<<mes<<" indicado.\n\n";
	}
	std::cout<<"\n-------------------------------------------------------------------------------\n";
	
}

void mostrar_cumple_fecha_hoy(amigo lista[tamano]){
	
	//Se obtiene la fecha y hora actual del sistema.
	time_t now = time(0);
	/*La fecha y hora que nos trae esta representada en el Tiempo Universal Coordinado (UTC),
	* que es la cantidad de segundos que han transcurrido desde el 1 de enero de 1970 hasta hoy.Ej. */
	std::cout << "\nNumeros de segundos desde 1 de enero de 1970: " << now << " s."<<std::endl;
	/*Para poder visualizarla como fecha y hora local. Ej. Thu Mar 30 22:20:58 2017
	* Se convierte la fecha a una cadena de caracteres.*/
	char* fecha = ctime(&now); //esta conversiÃ³n se realiza a travÃ©s de la funciÃ³n ctime()
	std::cout << "\nFecha y hora local es: " << fecha;
	/*Para poder visualizar cada uno de los componentes de la fecha por separado, es necesario
	* crear un objeto de la estructura tm de la librerÃ­a ctime y se asigna la fecha actual por medio
	* de la funciÃ³n localtime().
	*/
	tm *ltm = localtime(&now);
	/* La estrcutura tm esta compuesta por los siguientes atributos:
	* tm_sec;   // Segundos pasados del minuto (0-61)
	* tm_min;   // Minutos pasados de la hora (0-59)
	* tm_hour;  // Horas desde medianoche (0-23)
	* tm_mday;  // Dia del mes (1-31)
	* tm_mon;   // Numero del mes (0-11)
	* tm_year;  // AÃ±os transcurridos desde 1900
	* tm_wday;  // Dia de semana (0-6; Domingo = 0)
	* tm_yday;  // Dia del aÃ±o (0-365)
	* tm_isdst; /* Adelanto de hora para horario de verano 1=Si; 0=No; -1=Indefinido */
	std::cout << "\nHoy es "<<ltm->tm_mday<<"/"<<(ltm->tm_mon+1)<<"/"<<ltm->tm_year+1900<<std::endl;
	bool bandera=false;
	for(int i=0; i<tamano; i++){
		if(lista[i].dia==ltm->tm_mday && lista[i].mes==(ltm->tm_mon+1)){
			std::cout<<lista[i].nombre<<"\t\t"<<lista[i].dia<<"/"<<lista[i].mes<<"/"<<lista[i].anio<<std::endl;
			bandera=true;
		}
	}
	if(bandera==false){
		std::cout<<"\nLo siento, no hay nadie que cumpla el dia "<<ltm->tm_mday<<" y el mes "<<(ltm->tm_mon+1)<<" indicado."<<std::endl;
	}
	std::cout<<"\n-------------------------------------------------------------------------------\n";
	
}
