#include <stdlib.h>

int x = 0;
int y;

int main(void){

    int a = 5;
    int* p;
    p = (int*)malloc(sizeof(int));
    *p = 10;

    func();

    return 0;
}
void func(void){
    int z;
}
analiza la siguiente porcion de codigo y determina en que segmento esta almacenada cada variable

a) *p
b) y
c) x
d) z
e) a
f) valor numero 10


a) *p: Almacena en el segmento de memoria del heap. Se asigna memoria dinámicamente utilizando malloc.
       El segmento de memoria del heap es utilizado para almacenar datos que son asignados dinámicamente durante
       la ejecución del programa.

b) y: Almacena en el segmento de memoria del bss datos que contiene variables no inicializadas. En este caso, y es inicializada implícitamente con cero porque es una variable global y tiene alcance estático.

c) x: Almacena en el segmento de memoria del bss. Similar a y, x es una variable global y tiene alcance estático.

d) z:  es una variable local de la función func

e) a: Almacena en la pila. a es una variable local de la función main, y por lo tanto, se almacena en la pila.

f) Valor número 10: Este valor se almacena en el segmento de memoria del heap. Es el valor al que apunta el puntero p, que se asignó dinámicamente utilizando malloc.


#include <stdio.h>
#include<stdlib.h>

void change_pointer(int** p,COMPLETAR);

int main(void){

    int dato1 = 3;
    int dato2 = 2;
    int* pint = NULL;
    pint = &dato2;

    //COmpletar

    return 0;

void change_pointer(int** p,COMPLETAR){
    //completar
}

codifique las lineas necesarias para que utilizando la funcion change_pointer,pint contenga
la direccion de memoria de dato1 al final de la ejecucion del programa