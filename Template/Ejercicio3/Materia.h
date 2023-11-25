#include <iostream>
#include <string.h>

template <class T> 
class Materia{

    private: 
        string nombreMateria = " ";
        int clave = 0;
        T calificacion;

    public:
        Materia(string nombreMateria,int clave,T calificacion){
            this->nombreMateria = nombreMateria;
            this->clave = clave;
            this->calificacion = calificacion;
        }
        constexpr void mostrarDatos(){
            std::cout<<"Nombre de la Materia: "<<nombreMateria<<std::endl;
            std::cout<<"Clave: "<<std::endl;
            std::cout<<"Calificacion: "<<std::endl;
        }
        constexpr void setCalificacion(T calificacion){this->calificacion=calificacion;}
        constexpr T getCalificacion(){return calificacion;}

};