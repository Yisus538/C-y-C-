#include <iostream>

template <typename T>
T mayor(T dato1,T dato2){return dato1>=dato2? dato1:dato2;}

int main(){   

    
    std::cout<<"El mayor de dos numeros enteros es: "<<mayor(5,9)<<std::endl;
    std::cout<<"El mayor de dos numeros reales es: "<<mayor(9.87,4.56)<<std::endl;
    std::cout<<"El mayor de dos caracters es: "<<mayor('r','z')<<std::endl;

    
    return 0;
}
