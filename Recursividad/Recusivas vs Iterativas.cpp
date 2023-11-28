/* Ejercicio 2:
    Dado un numero natural N, obtener la suma de los digitos de que consta.
    Presentar un algoritmo recursivo y otro iterativo
 */

#include <iostream>

int sumaRecursiva(int);
int sumaIterativa(int);

int main(){

    int numero;

    std::cout<<"Ingrese un numero: "<<std::endl;
    std::cin>>numero;

    std::cout<<"Las suma de los numeros es: "<<sumaRecursiva(numero)<<std::endl;
    std::cout<<"La suma Iterativa "<<sumaIterativa(numero)<<std::endl;

    return 0;
}
int sumaRecursiva(int n){
    if(n<=9){ // Caso base
        return n;
    }else{  // Caso recursivo
        return sumaRecursiva(n/10) +n%10;
    }
}
int sumaIterativa(int n){
    int suma = 0;

    while(n > 9){
        suma += n%10;
        n /= 10;
    }
    return (suma+n);
}