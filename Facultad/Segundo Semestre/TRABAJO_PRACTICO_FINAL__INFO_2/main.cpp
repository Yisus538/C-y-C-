#include <iostream>
#include <stdlib.h>
#include "libreria.h"
using namespace std;

int main(int argc, char *argv[]){
	
	libreria Provicias; //Declaracion de un objeto
	float  prom_cba = 0, prom_men = 0,prom_sf = 0;
	string nombres[3]={"Cordoba ","Mendoza ","SanteFe "};	
	int opc;
	
	cout<<"Iniciando escaneo"<<endl;
	for(int i = 0 ; i < 3; i++){
		Provicias.setData(i);
	}
	cout<<"Escaneo Finalizado"<<endl;
	printf("Se a escaneado correctamente el archivo.\n");
	system("pause");
	system("cls");
	do{
		printf("***************************************MENU******************************************\n");
		printf("*1. Total de las muestras almacenadas en las listas pertenecientes a cada provincia *\n");
		printf("*2. Temperatura promedio de cada provincia                                          *\n");
		printf("*3. Temperatura promedio de cada ciudad                                             *\n");
		printf("*4. Ciudad mas calida de cada provincia                                             *\n");
		printf("*5. Ciudad mas fria de cada provincia                                               *\n");
		printf("*6. Dia mas frio de cada provincia                                                  *\n");
		printf("*7. Dia mas calido de cada ciudad                                                   *\n");
		printf("*8. Mejor provincia para el cultivo de pimientos                                    *\n");
		printf("*9. Salir                                                                           *\n");
		printf("*************************************************************************************\n");
		printf("Opcion: \n"); scanf(" %d", &opc);
		if(opc!=9){
			system("cls");
		}
		
		switch (opc)
		{
		case 1:
				cout<<"----------------------------CANTIDAD DE MEDICIONES---------------------------"<<endl;
			for(int i = 0 ; i < 3; i++){
				cout<<"-\tLa cantidad de mediciones de "<<nombres[i]<<" es de: "<<Provicias.Get_Total(i)<<"                    -"<<endl;
			}
				cout<<"-----------------------------------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			break;
		case 2:
			cout<<"\n----------------------------TEMPERATURA PROMEDIO POR PROVINCIA---------------------------"<<endl;
			
			cout<<"-\t"<<nombres[0]<<Provicias.prom_temp_provincia(1,prom_cba)<<"\t                                                        -"<<endl;
			cout<<"-\t"<<nombres[1]<<Provicias.prom_temp_provincia(2,prom_men)<<"\t                                                        -"<<endl;
			cout<<"-\t"<<nombres[2]<<Provicias.prom_temp_provincia(3,prom_sf)<<"\t                                                        -"<<endl;
			cout<<"-----------------------------------------------------------------------------------------"<<endl;
			
			system("pause");
			system("cls");
			break;
		case 3:
			cout<<"\n----------------------------TEMPERATURA PROMEDIO POR CIUDAD---------------------------"<<endl;
				Provicias.prom_temp_ciudad();
			cout<<"-----------------------------------------------------------------------------------------"<<endl;

			system("pause");
			system("cls");
			break;
		case 4:
			cout<<"\n----------------------------CIUDAD MAS CALIDA SEGUN EL PROMEDIO--------------------------"<<endl;
			Provicias.ciud_calido();
			cout<<"-----------------------------------------------------------------------------------------"<<endl;
			system("pause");
			system("cls");
			break;
		case 5:
			cout<<"\n----------------------------CIUDAD MAS FRIA SEGUN EL PROMEDIO----------------------------"<<endl;
			Provicias.ciud_frio();
			cout<<"-----------------------------------------------------------------------------------------"<<endl;
			system("pause");
			system("cls");
		break;
		case 6:
			cout<<"\n----------------------------DIA MAS FRIO DE PROVINCIAS---------------------------"<<endl;
			Provicias.dia_frio_prov();
			cout<<"-----------------------------------------------------------------------------------------"<<endl;
			system("pause");
			system("cls");
		break;
		case 7:
			cout<<"\n----------------------------DIA MAS CALIDO DE CADA CIUDAD---------------------------"<<endl;
			Provicias.dia_calido_prov();
			cout<<"-----------------------------------------------------------------------------------------"<<endl;

			system("pause");
			system("cls");
		break;
		case 8:
		cout<<"\n----------------------------MEJOR PROVINCIA PARA CULTIVAR PIMIENTOS---------------------------"<<endl;
			cout<<"\n";
			Provicias.pimientos();
			cout<<"\n";
			cout<<"-----------------------------------------------------------------------------------------"<<endl;	

			system("pause");
			system("cls");
		break;
		case 9:
			cout<<"----------------"<<endl;
			cout<<"\nSaliendo...\n"<<endl;
			cout<<"----------------"<<endl;
			exit(1);
		break;
		}
	}
	while(opc!=9);
	
	system("pause");
	return 0;
}

