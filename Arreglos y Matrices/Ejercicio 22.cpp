/*
6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
*/
#include <iostream>

int main(){

    int mcuadrada1[3][3]={{1,2,3},{4,5,6},{7,8,9}},mcuadrada2[3][3]={{1,2,3},{4,5,6},{7,8,9}}/*suma[3][3]={0}*/;

    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){

         /*suma[i][j] = mcuadrada1[i][j] + mcuadrada2[i][j]*/
           std::cout<<mcuadrada1[i][j] + mcuadrada2[i][j]<<" ";

       }
        std::cout<<"\n";
    }
    /* for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){

          cout<<suma[i][j]<<" ";

       }
       cout<<"\n";
    }
    */
   
    
    system("pause");
    return 0;
}