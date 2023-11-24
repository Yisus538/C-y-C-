/*Un estudiante esta aprendiendo las tablas de multiplicar del 
1 al 10,  entonces realice un programa que obtenga dos numeros 
aleatorios entre el 1 y 10 y asi compone una multiplicacion. 
Luego el estudiante ingresa el resultado, y el programa debera 
evaluar si es correcto o no. En caso de que sea incorrecto 
brindar la solucion. Despues el programa preguntara si desea 
seguir practicando. Si el estudiante responde Si 'S' el programa 
genera otro calculo, en caso de que diga que No 'N' se dara por 
terminada la sesion de preguntas y mostrara la cantidad de 
preguntas en total y cuantas respuestas fueron correctas. */

#include <iostream>
#include <ctime>

int main() {
	int num1=0, num2=0, res=0, res_bien=0, cant=0, cant_bien=0;
	char rta=' ';
	srand(time(NULL));
	std::cout<<"Tablas"<<std::endl;
	do{
		num1 = rand() % 10 + 1;
		num2 = rand() % 10 + 1;
		std::cout<<"¿Cuanto es "<<num1<<" x "<<num2<<"? ";
		std::cin>>res;
		cant++;
		res_bien=num1*num2;
		if(res==res_bien){
			std::cout<<"Felicitaciones!"<<std::endl;
			cant_bien++;
		}else{
			std::cout<<"Lo siento. La solucion es: "<<res_bien<<std::endl;
		}
		std::cout<<"\n¿Desea seguir practicando? (s/n) "<<std::endl;
		std::cin>>rta;
	}while(rta=='s' || rta=='S');
	std::cout<<"\n---RESULTADOS---\nTotal: "<<cant<<"\nCorrectas: "<<cant_bien; 
	return 0;
}

