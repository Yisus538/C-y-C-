#include <iostream>

template <class T> class Arreglo{

    private:
        T *array;
        int indice;
        int TAM;
    public:

        Arreglo(int n){
            array = new T[n];
            indice = 0;
            TAM = 0;
        }
        ~Arreglo(){
            delete[] array;
        }
        constexpr void agregar(T elementos){array[indice++]=elementos;}
        constexpr bool arrayLleno(){return indice>=TAM? true:false;}
        constexpr void mostrarArray(){
            for(T i : array){
                std::cout<<"Elemento: "<<i<<std::endl;
            }
        }
        constexpr void vaciarArray(){
            for(T i:array){
                i = nullptr;
            }
            indice=0;
        }
};