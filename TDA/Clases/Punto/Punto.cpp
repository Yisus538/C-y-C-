#include <iostream>
#include "Punto.h"
using namespace std;

Punto::Punto(){
    x = y = 0;
}
Punto::Punto(int x,int y){
    this->x = x;
    this->y = y;
}
void Punto::SetX(int x){
    this->x = x;
}
void Punto::SetY(int y){
    this->y = y;
}
int Punto::GetX(){
    return x;
}
int Punto::GetY(){
    return y;
}