//13. Hacer sucesion Fibonacci.// 1 1 2 3 5 8 13 21....n
#include <iostream>


int main(int argc, char*argv[]){
    
    int n=0,x=0,y=1,z=0;

    std::cout<<"Digite el alcance de la sucesion fibonacci: \n"; std::cin>>n;
    for(int i=1;i<=n;i++){
      z= x + y;
      std::cout<<z<<" ";
      x = y;//1 2
      y = z;//1 2
    }



    return 0;
}
