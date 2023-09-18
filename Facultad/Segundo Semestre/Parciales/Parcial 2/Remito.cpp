#include "Remito.h"

Remito::Remito() { }
Remito::Remito(int numero, string apellido, int cant_lad, float peso_tot) { 
	this->numero=numero;
	this->apellido=apellido;
	this->cant_ladrillo=cant_lad;
	this->peso_total=peso_tot;
}
void Remito::setNumero(int numero) {numero = numero;}
int Remito::getNumero() {return numero; }
void Remito::setApellido(string apellido) {apellido = apellido; }
string Remito::getApellido() {return apellido; }
void Remito::setCant_ladrillo(int cant_lad) {cant_ladrillo = cant_lad;}
int Remito::getCant_ladrillo() {return cant_ladrillo; }
void Remito::setPeso_total(float peso_tot) {peso_total = peso_tot;}
float Remito::getPeso_total() {return peso_total; }

string Remito::toString(){
	string cadena=std::to_string(numero)+"\t"+apellido+"\t"+std::to_string(cant_ladrillo)+"\t"+std::to_string(peso_total)+"\n";
	return cadena;
}
