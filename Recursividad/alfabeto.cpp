/*Ejercicio 1:

  hacer un programq que muestre el alfabeto,caracter a caracter, utilizando recursividad
  mutua o indirecta

 */
#include <iostream>

void funcionA(char);
void funcionB(char);

int main(){

    std::cout<<"Alfabeto: ";
    funcionA('Z');

    return 0;
}

void funcionA(char letra){
    if(letra > 'A'){
        funcionB(letra);
    }
    std::cout<<letra<<" ";
}
void funcionB(char letra){
    funcionA(--letra);
}