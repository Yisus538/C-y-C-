/*Elaborar un algoritmo para obtener el resultado del escrutinio 
en las elecciones de un pueblo. Se han presentado 3 candidatos, 
considerar la posibilidad del voto en blanco e impugnado. 
El programa debe mostrar: 

- El orden de los ganadores 1, 2 y 3 lugar. (por mayoria simple)
- Las cantidades de votos que sacaron cada uno, como tambien 
la cantidad de votos en blanco e impugnados.*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int voto=0, can1=0, can2=0, can3=0, blanco=0, imp=0;
	int puesto1_v=0, puesto2_v=0, puesto3_v=0;
	char rta='s', puesto1=' ', puesto2=' ', puesto3=' ';
	
	cout<<"ELECCIONES"<<endl<<endl;
	while(rta=='s' || rta=='S'){
		cout<<"Ingrese su voto: "<<endl;
		cout<<"1. Candidato A\n2. Candidato B\n3. Candidato C\n4. Blanco\n5. Impugnado"<<endl;
		cin>>voto;
		switch(voto){
			case 1: 
				can1++;
				break;
			case 2:
				can2++;
				break;
			case 3:
				can3++;
				break;
			case 4:
				blanco++;
				break;
			default:
				imp++;
		}
		cout<<"\n¿Mas votantes (s/n)? ";
		cin>>rta;
	}
	//Escrutinio Orden
	if(can1>can2 && can1>can3){
		puesto1='A';
		puesto1_v=can1;
		if(can2>can3){
			puesto2='B';
			puesto2_v=can2;
			puesto3='C';
			puesto3_v=can3;
		}else{
			puesto2='C';
			puesto2_v=can3;
			puesto3='B';
			puesto3_v=can2;
		}
	}else{
		if(can2>can1 && can2>can3){
			puesto1='B';
			puesto1_v=can2;
			if(can1>can3){
				puesto2='A';
				puesto2_v=can1;
				puesto3='C';
				puesto3_v=can3;
			}else{
				puesto2='C';
				puesto2_v=can3;
				puesto3='A';
				puesto3_v=can1;
			}
		}else{
			puesto1='C';
			puesto1_v=can3;
			if(can1>can2){
				puesto2='A';
				puesto2_v=can1;
				puesto3='B';
				puesto3_v=can2;
			}else{
				puesto2='B';
				puesto2_v=can2;
				puesto3='A';
				puesto3_v=can1;
			}
		}
	}
	
	//Resultados
	cout<<"\nResultados del escrutinio"<<endl;
	cout<<"1 Puesto: Candidato "<<puesto1<<" con "<<puesto1_v<<" votos. "<<endl;
	cout<<"2 Puesto: Candidato "<<puesto2<<" con "<<puesto2_v<<" votos. "<<endl;
	cout<<"3 Puesto: Candidato "<<puesto3<<" con "<<puesto3_v<<" votos. "<<endl;
	cout<<"Votos en blanco: "<<blanco<<endl;
	cout<<"Votos impugnados: "<<imp<<endl;

	return 0;
}

