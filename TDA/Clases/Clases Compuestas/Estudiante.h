#include <iostream>
#include <string.h>
#include "Direccion.h"
#include "Expediente.h"

class Estudiante{

    private:
      
        string codigo;
        float promedio;
        Expediente exp;
        Direccion dir;

    public:

        Estudiante(string codigo,float promedio,int nroExpediente,string direccion) : dir(direccion),exp(nroExpediente);
        void MostrarDatos();

};