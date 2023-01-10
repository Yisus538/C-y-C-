#include <iostream>
#include "Expediente.h"
using namespace std;

Expediente::Expediente(){

}
Expediente::Expediente(int nroExpediente){
    this->nroExpediente = nroExpediente;
}
int Expediente::getExpediente(){
    int nroExpediente;
    nroExpediente = this->nroExpediente;
   
    return nroExpediente;
}
Expediente::~Expediente(){

}