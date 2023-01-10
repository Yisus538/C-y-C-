#include <iostream>
#include "Estaticas.cpp"
#include <stdlib.h>
using namespace std;

int main(int argc,char**argv){

    Estaticas *obj1 = new Estaticas(); 
    Estaticas *obj2 = new Estaticas();

    cout<<obj2->get_Estaticas()<<endl;

    system("pause");
    return 0;
}