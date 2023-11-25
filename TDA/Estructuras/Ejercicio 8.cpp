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

struct cancion{
	std::string artista;
	std::string titulo;
	int duracion;
	int tamanio;
};


int main() {
	
	struct cancion cancionero[3]; 

	char op=' ';
	std::string buscar_titulo=" ";
	bool bandera_encontrado=false;
	
	do{
		std::cout<<"MENU DE OPCIONES"<<std::endl;
		std::cout<<"a. Agregar.\nb. Mostrar.\nc. Buscar.\n";
		std::cin>>op;
		switch(op){
		case 'a': 
			
			for(int i=0; i<3; i++){
				std::cout<<"\nINGRESE LOS DATOS DE LA CANCION Nº"<<i+1<<": "<<std::endl;
				std::cout<<"Artista: ";
				getline(std::cin,cancionero[i].artista,'.');
				std::cout<<"Titulo: ";
				getline(std::cin,cancionero[i].titulo,'.');
				std::cout<<"Duracion: ";
				std::cin>>cancionero[i].duracion;
				std::cout<<"Tamaño: ";
				std::cin>>cancionero[i].tamanio;
				std::cout<<"---------------------------------------------------"<<std::endl;
			}
			break;
		case 'b':
			for(int i=0; i<3; i++){
				std::cout<<"\nDATOS DE CANCION Nº"<<i+1<<": "<<std::endl;
				std::cout<<"\nArtista: "<<cancionero[i].artista<<std::endl;
				std::cout<<"\nTitulo: "<<cancionero[i].titulo<<std::endl;
				std::cout<<"\nDuracion: "<<cancionero[i].duracion<<std::endl;
				std::cout<<"\nTamaño: "<<cancionero[i].tamanio<<std::endl;
				std::cout<<"---------------------------------------------------"<<std::endl;
			}
			break;
		case 'c':
			std::cout<<"INGRESE EL TITULO DE LA CANCION A BUSCAR: "<<std::endl;
			getline(std::cin,buscar_titulo,'.');
			bandera_encontrado=false;
			for(int i=0; i<3; i++){
				if(buscar_titulo.compare(cancionero[i].titulo)==0){
					std::cout<<"Titulo de cancion encontrado. "<<std::endl;
					std::cout<<"\nArtista: "<<cancionero[i].artista<<std::endl;
					std::cout<<"\nTitulo: "<<cancionero[i].titulo<<std::endl;
					std::cout<<"\nDuracion: "<<cancionero[i].duracion<<std::endl;
					std::cout<<"\nTamaño: "<<cancionero[i].tamanio<<std::endl;
					bandera_encontrado=true;
				}
			}
			if(bandera_encontrado==false){
				std::cout<<"No se encontro el titulo de la cancion. ";
			}
			break;
		}
		std::cout<<"\n¿Desea seguir (S/N)? ";
		std::cin>>op;
		
	}while(op=='s' || op=='S');
	
	return 0;
}

