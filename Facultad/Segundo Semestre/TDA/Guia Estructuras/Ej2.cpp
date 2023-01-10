/*Crear un programa que pida los siguientes datos de una cancion: 
Artista, Titulo, Duracion (en segundos),Tamaño del archivo (en KB). 
Crear una estructura que almacene datos de la cancion y luego los
muestre por pantalla.

Ampliar el programa del ejercicio anterior, para que almacene datos 
de hasta 3 canciones en un vector de estructura.
Luego crear un menu que permita las opciones: 
a. agregar una nueva cancion
b. mostrar todas las canciones
c. buscar una cancion por titulo

*/


#include <iostream>
#include <cstring>
using namespace std;

struct cancion
{
	string artista;
	string titulo;
	int duracion;
	int tamanio;
};


int main(int argc, char *argv[]) {
	
	struct cancion cancionero[3]; 

	char op=' ';
	string buscar_titulo=" ";
	bool bandera_encontrado=false;
	
	do{
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"a. Agregar.\nb. Mostrar.\nc. Buscar.\n";
		cin>>op;
		switch(op){
		case 'a': 
			
			for(int i=0; i<3; i++){
				cout<<"\nINGRESE LOS DATOS DE LA CANCION Nº"<<i+1<<": "<<endl;
				cout<<"Artista: ";
				getline(cin,cancionero[i].artista,'.');
				cout<<"Titulo: ";
				getline(cin,cancionero[i].titulo,'.');
				cout<<"Duracion: ";
				cin>>cancionero[i].duracion;
				cout<<"Tamaño: ";
				cin>>cancionero[i].tamanio;
				cout<<"---------------------------------------------------"<<endl;
			}
			break;
		case 'b':
			for(int i=0; i<3; i++){
				cout<<"\nDATOS DE CANCION Nº"<<i+1<<": "<<endl;
				cout<<"\nArtista: "<<cancionero[i].artista<<endl;
				cout<<"\nTitulo: "<<cancionero[i].titulo<<endl;
				cout<<"\nDuracion: "<<cancionero[i].duracion<<endl;
				cout<<"\nTamaño: "<<cancionero[i].tamanio<<endl;
				cout<<"---------------------------------------------------"<<endl;
			}
			break;
		case 'c':
			cout<<"INGRESE EL TITULO DE LA CANCION A BUSCAR: "<<endl;
			getline(cin,buscar_titulo,'.');
			bandera_encontrado=false;
			for(int i=0; i<3; i++){
				if(buscar_titulo.compare(cancionero[i].titulo)==0){
					cout<<"Titulo de cancion encontrado. "<<endl;
					cout<<"\nArtista: "<<cancionero[i].artista<<endl;
					cout<<"\nTitulo: "<<cancionero[i].titulo<<endl;
					cout<<"\nDuracion: "<<cancionero[i].duracion<<endl;
					cout<<"\nTamaño: "<<cancionero[i].tamanio<<endl;
					bandera_encontrado=true;
				}
			}
			if(bandera_encontrado==false){
				cout<<"No se encontro el titulo de la cancion. ";
			}
			break;
		}
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>op;
		
	}while(op=='s' || op=='S');
	
	return 0;
}

