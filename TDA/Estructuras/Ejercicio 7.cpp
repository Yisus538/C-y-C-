/*Crear un programa que pida los siguientes datos de una cancion: 
Artista, Titulo, Duracion (en segundos),Tamaño del archivo (en KB). 
Crear una estructura que almacene datos de la cancion y luego los
muestre por pantalla.
*/

#include <iostream>

struct cancion
{
	std::string artista;
	std::string titulo;
	int duracion;
	int tamanio;
};


int main() {
	
	struct cancion can;
	std::cout<<"Ingrese los siguientes datos de la cancion: "<<std::endl;
	std::cout<<"Artista: ";
	//getline (cin, nombre de la variable string, caracter delimitador); 
	getline(std::cin,can.artista,'\n'); //Ingresa los nombres hasta que presione enter (\n). 
	std::cout<<"Titulo: ";
	getline(std::cin,can.titulo,'\n');
	std::cout<<"Duracion: ";
	std::cin>>can.duracion;
	std::cout<<"Tamaño: ";
	std::cin>>can.tamanio;
	
	std::cout<<"\nDatos de la canción: "<<std::endl;
	std::cout<<"Artista: "<<can.artista<<std::endl;
	std::cout<<"Titulo: "<<can.titulo<<std::endl;
	std::cout<<"Duracion: "<<can.duracion<<std::endl;
	std::cout<<"Tamaño: "<<can.tamanio<<std::endl;

	return 0;
}

