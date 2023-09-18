#ifndef U03_PILAS_PILA_PILA_H_
#define U03_PILAS_PILA_PILA_H_

#include "nodo.h"
template <class T>class Pila{

private:
    Nodo<T> *tope;

public:
    Pila();
    ~Pila();
    void push(T dato);
    T pop();
    bool esVacia();
    T peek();
    void insertAfter2(T oldValue, int n, T newValue);

};

template <class T>Pila<T>::Pila(){tope = nullptr;}

template <class T>Pila<T>::~Pila() {
    while(!esVacia()){
        pop();
    }

    delete tope;
}

template <class T>void Pila<T>::push(T dato){

    Nodo<T> *nuevo;
    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(tope);
    tope = nuevo;
}
template <class T>T Pila<T>::pop(){
    if(esVacia()){
        throw 400;
    }

    T dato = tope->getDato();
    Nodo<T> *aBorrar = tope;
    tope = tope->getSiguiente();

    delete aBorrar;
    return dato;
}
template <class T>bool Pila<T>::esVacia(){return tope == nullptr;}
template <class T>T Pila<T>::peek() {
    if (esVacia()) {
        throw std::out_of_range("La pila está vacía.");
    }
    return tope->getDato();
}
template <class T>void Pila<T>::insertAfter2(T oldValue, int n, T newValue){
    
    Pila<T> pilaAux;
    int contador = 0;

    while (!esVacia()) {
        T valor = pop();
        if (valor == oldValue) {
            contador++;
            if (contador == n) {
                pilaAux.push(valor);
                pilaAux.push(newValue);
            }
        } else {
            pilaAux.push(valor);
        }
    }

    while (!pilaAux.esVacia()) {
        push(pilaAux.pop());
    }
}

#endif 
