/*Determinar el producto de dos números de manera recursiva. 
Por ejemplo:

3 * 4 = 12
3+(3*3) = 12
3+(3+(3*2)) = 12
3+(3+(3+(3*1)))=12

*/

#include <iostream>
using namespace std;

int calcular_producto(int n1,int n2);

int main(int argc, char *argv[]) {
	
	int n1=0,n2=0;
	cout<<"Ingrese el multiplicando: ";
	cin>>n1;
	cout<<"Ingrese el multiplicador: ";
	cin>>n2;
	cout<<"\n"<<calcular_producto(n1,n2)<<"\n";
	return 0;
}

int calcular_producto(int n1,int n2){
	string cadena="";
	if(n1==0||n2==0){
		return 0;
	}else if(n1==1){ 
		return n2;
	}else if(n2==1){ 
		return n1;
	}else{ 
		cout<<"\n"<<n1<<"+("<<n1<<"*"<<n2-1<<")="<<n1*n2<<"\n"; //solo para mostrar
		return n1+calcular_producto(n1,n2-1);
	}
}
