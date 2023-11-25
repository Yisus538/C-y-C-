#include <iostream>
using namespace std;

class Producto{
private:
	string nombre;
	string marca;
	float precio;
	string fecha_elaboracion;
	int tamanio;
	
public:
	Producto(); 
	void setNombre(string nom); 
	string getNombre();
	void setMarca(string mar); 
	string getMarca();
	void setPrecio(float pre); 
	float getPrecio();
	void setFecha_elaboracion(string fecha_ela); 
	string getFecha_elaboracion();
	void setTamanio(int tam); 
	int getTamanio();
	string toString();
};

Producto::Producto() { 
}

void Producto::setNombre(string nom) {
	nombre = nom; }
string Producto::getNombre() {
	return nombre; }

void Producto::setMarca(string mar) {
	marca = mar; }
string Producto::getMarca() {
	return marca; }

void Producto::setPrecio(float pre) {
	precio = pre; }
float Producto::getPrecio() {
	return precio; }

void Producto::setFecha_elaboracion(string fecha_ela) {
	fecha_elaboracion = fecha_ela; }
string Producto::getFecha_elaboracion() {
	return fecha_elaboracion; }

void Producto::setTamanio(int tam) {
	tamanio = tam; }
int Producto::getTamanio() {
	return tamanio; }

string Producto::toString(){
	string cadena=nombre+","+marca+","+std::to_string(precio)+","+fecha_elaboracion+","+std::to_string(tamanio);
	return cadena;
}
