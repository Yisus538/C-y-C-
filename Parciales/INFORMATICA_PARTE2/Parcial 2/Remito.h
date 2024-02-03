#ifndef REMITO_H
#define REMITO_H
#include <string>

class Remito {
private:
	int numero;
	std::string apellido;
	int cant_ladrillo;
	float peso_total;
public:
	Remito(); // constructor de objetos por defecto
	Remito(int,std::string, int, float); //constructor con datos
	//funciones publicas que permiten asignar o leer los datos del objeto
	void setNumero(int num);
	int getNumero();
	void setApellido(std::string ape);
	std::string getApellido();
	void setCant_ladrillo(int cant_lad);
	int getCant_ladrillo();
	void setPeso_total(float peso_tot);
	float getPeso_total();
	std::string toString();
};

#endif //REMITO_H

