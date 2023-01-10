/*10. Una  fabrica  de  tornillos  nos  ha  solicitado  desarrollar  un  programa  
en  C  que permita  obtener  e  imprimir  las  estadisticas  de  una  determinada  
muestra  de tornillos.  Para  ello  nos  indican  que  cada  tornillo  viene  
caracterizado  por  su longitud  y  su  diametro  y  que  ambas  medidas deben  
almacenarse  en  un  registro con dos campos. Desarrollar un programa en C que:

a. Solicite  al  usuario  los  datos  de  una   muestra  de   tornillos  
(longitud  y diametro) y los almacene en un vector 

b. A  partir  de  los  datos  introducidos  calcule  y  muestre  por  pantalla 
la  media de las longitudes y la media de los diametros.

Nota:  El  tamaño  de  la  muestra  se  definira  como  una  constante  
denominada TAMANIO_MUESTRA

*/

#include <iostream>
#define TAMANIO_MUESTRA 4

using namespace std;

struct tornillo
{
	float longitud;
	float diametro;
};

void cargar(tornillo [TAMANIO_MUESTRA]);
void mostrar_medias(tornillo [TAMANIO_MUESTRA]);

int main(int argc, char *argv[]) {
	
	struct tornillo vector[TAMANIO_MUESTRA];
	char op=' ', rta=' ';
	
	do{
		
		cout<<"*****************MENU DE OPCIONES*****************"<<endl;
		cout<<"a. Cargar datos"<<endl;
		cout<<"b. Media de las logitudes y media de los diametros"<<endl;
		cin>>op;
		cout<<"**************************************************\n\n";
		switch(op){
		case 'a': 
		case 'A': 
			cargar(vector);
			break;
		case 'b':
		case 'B':
			mostrar_medias(vector);
			break;
		}
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>rta;
		cout<<"\n\n";
	}while(rta=='s' || rta=='S');
	
	return 0;
}

void cargar(tornillo vector[TAMANIO_MUESTRA]){
	cout<<"Carga de datos longitud y diametro de cada muestra: \n"<<endl;
	for(int i=0; i<TAMANIO_MUESTRA; i++){
		cout<<"\nMuestra "<<i+1<<": \n";
		cin>>vector[i].longitud>>vector[i].diametro;
	}	
}
	
void mostrar_medias(tornillo vector[TAMANIO_MUESTRA]){
	float suma_longitud=0, suma_diametro=0;
	for(int i=0; i<TAMANIO_MUESTRA; i++){
		suma_longitud+=vector[i].longitud;
		suma_diametro+=vector[i].diametro;
	}
	cout<<"\nMuestra: "<<TAMANIO_MUESTRA<<endl;
	cout<<"Media de Longuitud: "<<suma_longitud/(float)TAMANIO_MUESTRA<<endl;
	cout<<"Media de Diametro: "<<suma_diametro/(float)TAMANIO_MUESTRA<<endl;
}
