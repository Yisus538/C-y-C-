/*15. Realiace un programa que solicite al usuario un numero entero entre el 1 y el 100.
El programa debe generar un numero aleatorio en ese mismo rango[1-100],e indicarle al usuario
si el numero que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine y por 
ultimo mostrarle el numero de intentos que le llevo.*/

/*variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior); */ 

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
   
     int numero=0, dato=0, contador=0;

     srand(time(NULL)); //numero aleatorio;
     dato = 1 + rand()%(100);

     do{

        std::cout<<"Digite un numero: "; std::cin>>numero;
 
        if(numero>dato){  
            std::cout<<"Digite un numero menor\n";
        }
        if(numero<dato){
            std::cout<<"Digite un numero mayor\n";
        }
        contador++;
     }while(numero != dato);

     std::cout<<"FELICIDADES ADIVINASTE EL NUMERO"<<std::endl;
     std::cout<<"Numero de intentos: "<<contador;
    system("pause");
    return 0;
}
