#include <iostream>

template <class T,class T1>
class Ejemplo{

    private:
        T dato1;
        T1 dato2;

    public:
        Ejemplo(T dato1,T1 dato2){
            this->dato1 = dato1;
            this->dato2 = dato2;
        }
        void setDato1(T dato1){
            this->dato1 = dato1;
        }
        T getDato1(){
            return dato1;
        }
        void setDato2(T1 dato2){
            this->dato2 = dato2;
        }
        T1 getDato2(){
            return dato2;
        }

        void mostrarDatos(){
            std::cout<<"Dato1 = "<<dato1<<std::endl;
            std::cout<<"Dato2 = "<<dato2<<std::endl;
        }
};