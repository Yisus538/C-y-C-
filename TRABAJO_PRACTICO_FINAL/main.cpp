#include <iostream>
#include "libreria.cpp"

int main(){
	
	libreria Provicias; //Declaracion de un objeto
	float  prom_cba = 0, prom_men = 0,prom_sf = 0;
	std::string nombres[3]={"Cordoba ","Mendoza ","SanteFe "};	
	int opc;
	
	std::cout<<"Iniciando escaneo"<<std::endl;
	for(int i = 0 ; i < 3; i++){
		Provicias.setData(i);
	}
	std::cout<<"Escaneo Finalizado"<<std::endl;
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
				std::cout<<"----------------------------CANTIDAD DE MEDICIONES---------------------------"<<std::endl;
			for(int i = 0 ; i < 3; i++){
				std::cout<<"-\tLa cantidad de mediciones de "<<nombres[i]<<" es de: "<<Provicias.Get_Total(i)<<"                    -"<<std::endl;
			}
				std::cout<<"-----------------------------------------------------------------------------"<<std::endl;
			system("pause");
			system("cls");
			break;
		case 2:
			std::cout<<"\n----------------------------TEMPERATURA PROMEDIO POR PROVINCIA---------------------------"<<std::endl;
			
			std::cout<<"-\t"<<nombres[0]<<Provicias.prom_temp_provincia(1,prom_cba)<<"\t                                                        -"<<std::endl;
			std::cout<<"-\t"<<nombres[1]<<Provicias.prom_temp_provincia(2,prom_men)<<"\t                                                        -"<<std::endl;
			std::cout<<"-\t"<<nombres[2]<<Provicias.prom_temp_provincia(3,prom_sf)<<"\t                                                        -"<<std::endl;
			std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
			
			system("pause");
			system("cls");
			break;
		case 3:
			std::cout<<"\n----------------------------TEMPERATURA PROMEDIO POR CIUDAD---------------------------"<<std::endl;
				Provicias.prom_temp_ciudad();
			std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;

			system("pause");
			system("cls");
			break;
		case 4:
			std::cout<<"\n----------------------------CIUDAD MAS CALIDA SEGUN EL PROMEDIO--------------------------"<<std::endl;
			Provicias.ciud_calido();
			std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
			system("pause");
			system("cls");
			break;
		case 5:
			std::cout<<"\n----------------------------CIUDAD MAS FRIA SEGUN EL PROMEDIO----------------------------"<<std::endl;
			Provicias.ciud_frio();
			std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
			system("pause");
			system("cls");
		break;
		case 6:
			std::cout<<"\n----------------------------DIA MAS FRIO DE PROVINCIAS---------------------------"<<std::endl;
			Provicias.dia_frio_prov();
			std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
			system("pause");
			system("cls");
		break;
		case 7:
			std::cout<<"\n----------------------------DIA MAS CALIDO DE CADA CIUDAD---------------------------"<<std::endl;
			Provicias.dia_calido_prov();
			std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;

			system("pause");
			system("cls");
		break;
		case 8:
		std::cout<<"\n----------------------------MEJOR PROVINCIA PARA CULTIVAR PIMIENTOS---------------------------"<<std::endl;
			std::cout<<"\n";
			Provicias.pimientos();
			std::cout<<"\n";
			std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;	

			system("pause");
			system("cls");
		break;
		case 9:
			std::cout<<"----------------"<<std::endl;
			std::cout<<"\nSaliendo...\n"<<std::endl;
			std::cout<<"----------------"<<std::endl;
			exit(1);
		}
	}
	while(opc!=9);
	
	system("pause");
	return 0;
}

