#include "Remito.h"

Remito::Remito() = default;
Remito::Remito(int numero, std::string apellido, int cant_lad, float peso_tot) {
	this->numero = numero;
	this->apellido = apellido;
	this->cant_ladrillo = cant_lad;
	this->peso_total = peso_tot;
}
void Remito::setNumero(int numero) {this->numero = numero;}
int Remito::getNumero() {return numero;}
void Remito::setApellido(std::string apellido) {this->apellido = apellido;}
std::string Remito::getApellido() {return apellido; }
void Remito::setCant_ladrillo(int cant_lad) {this->cant_ladrillo = cant_lad;}
int Remito::getCant_ladrillo() {return cant_ladrillo;}
void Remito::setPeso_total(float peso_tot) {this->peso_total = peso_tot;}
float Remito::getPeso_total() {return peso_total;}

std::string Remito::toString(){
	std::string cadena= std::to_string(numero)+"\t"+apellido+"\t"+std::to_string(cant_ladrillo)+"\t"+std::to_string(peso_total)+"\n";
	return cadena;
}
