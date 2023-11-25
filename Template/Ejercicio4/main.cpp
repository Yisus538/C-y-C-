#include <iostream>
#include "Arreglo.h"
#include <stdlib.h>


void opciones(){
    std::cout<<"\tMenu:"<<std::endl;
    std::cout<<"1. Agregar elemento."<<std::endl;
    std::cout<<"2. Comprobar espacio de arreglo"<<std::endl;
    std::cout<<"3. Ver arreglo"<<std::endl;
    std::cout<<"4. Vaciar arreglo"<<std::endl;
    std::cout<<"5. Salir\nOPCION: "<<std::endl;
}

int main(){
    
    Arreglo <int> array(5);
    int opcion = 0,elemento = 0;

    do{
        opciones();
        std::cin>>opcion;

        switch (opcion)
        {
        case 1:
            if(array.arrayLleno()){ 
                std::cout<<"El Arreglo esta lleno"<<std::endl; 
            }else{
                 std::cout<<"Digite un elemento"<<std::endl;
                 std::cin>>elemento;
                 array.agregar(elemento);
            }           
        break;
        
        case 2: 
             if(array.arrayLleno()){ 
                std::cout<<"El Arreglo esta lleno"<<std::endl; 
            }else{
                 std::cout<<"El arreglo aun no esta lleno"<<std::endl;
            }          
        break;
        case 3: 
            std::cout<<"Los elementos del arreglo son: "<<std::endl;
            array.mostrarArray();
        break;
        // case 4: 
        //     std::cout<<"Vaciando el arreglo."<<std::endl;
        //     array.vaciarArray();
        // break;
        case 5: break;
       // default: std::cout<<"Se equivoco de opcion."<<std::endl; break;
        }
        system("pause");
        system("cls");
        std::cout<<std::endl;
    }while(opcion!=5); 
    
    
    
    
    return 0;
}