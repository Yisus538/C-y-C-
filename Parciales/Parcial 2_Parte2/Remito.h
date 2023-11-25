#ifndef REMITO_H
#define REMITO_H
#include <string>
using namespace std;

class Remito {
private:
	int numero;
	string apellido; 
	int cant_ladrillo;
	float peso_total;
public:
	Remito(); // constructor de objetos por defecto
	Remito(int, string, int, float); //constructor con datos
	//funciones publicas que permiten asignar o leer los datos del objeto
	void setNumero(int num);
	int getNumero();
	void setApellido(string ape); 
	string getApellido();
	void setCant_ladrillo(int cant_lad);
	int getCant_ladrillo();
	void setPeso_total(float peso_tot);
	float getPeso_total();
	string toString();
};

#endif //REMITO_H

