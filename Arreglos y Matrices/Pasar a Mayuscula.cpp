// Pasar una palabra a Mayuscula - FUncion strupr()
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc,char*argv[]){

    char palabra[] = "martinez";

    strupr(palabra);
    

    cout<<palabra<<endl;

    system("pause");
    return 0;
}