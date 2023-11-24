//13. Hacer sucesion Fibonacci.// 1 1 2 3 5 8 13 21....n
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char*argv[]){
    
    int n=0,x=0,y=1,z=0;

    cout<<"Digite el alcance de la sucesion fibonacci: \n"; cin>>n;
    for(int i=1;i<=n;i++){
      z= x + y;
      cout<<z<<" ";
      x = y;//1 2
      y = z;//1 2
    }

    getch();
    return 0;
}
