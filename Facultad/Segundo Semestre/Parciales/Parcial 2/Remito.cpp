#include "Remito.h"

//desarrollo de las funciones de la clase.
Remito::Remito() { //es el contructor por defecto
}

Remito::Remito(int num, string ape, int cant_lad, float peso_tot) { //es el contructor por defecto
	numero=num;
	apellido=ape;
	cant_ladrillo=cant_lad;
	peso_total=peso_tot;
}

void Remito::setNumero(int num) {
	numero = num;}
int Remito::getNumero() {
	return numero; }

void Remito::setApellido(string ape) {
	apellido = ape; }
string Remito::getApellido() {
	return apellido; }

void Remito::setCant_ladrillo(int cant_lad) {
	cant_ladrillo = cant_lad;}
int Remito::getCant_ladrillo() {
	return cant_ladrillo; }

void Remito::setPeso_total(float peso_tot) {
	peso_total = peso_tot;}
float Remito::getPeso_total() {
	return peso_total; }

string Remito::toString(){
	string cadena=std::to_string(numero)+"\t"+apellido+"\t"+std::to_string(cant_ladrillo)+"\t"+std::to_string(peso_total)+"\n";
	return cadena;
}
