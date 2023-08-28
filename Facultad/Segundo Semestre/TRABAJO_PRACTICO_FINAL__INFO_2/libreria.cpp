#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "libreria.h"
using namespace std;

libreria::libreria(){ //CONSTRUCTOR POR DEFECTO...
}
constexpr void libreria::setData(int i){//CARGA DE LOS DATOS...
	
	city *General{nullptr};
	city *Cordoba{nullptr};//Lista Cordoba
	city *Mendoza{nullptr};//Lista Mendoza
	city *Santa_fe{nullptr};//Lista Santa Fe
	int codP=0,codC=0;//codigo provincia y codigo ciudad
	int  hh = 0, mm = 0, month = 0, day = 0;//hora , minutos, mes, dia , variables de la estructura measurement
	float hum = 0, temp = 0;//humedad , temperatura variables de la estructura timestamp
	char name[50] = {' '};//nombre de ciudad ,variable estructura city
	
	FILE *fp{fopen("data_set.txt","r")};
	
	CHECK_NULL(fp);
	
	
	//Escaneo y Guardado de Datos
	while(!feof(fp)){
		fscanf(fp,"%d%d%s%f%f%d%d%d%d",&codC,&codP,&name,&temp,&hum,&hh,&mm,&day,&month);
			filtro = (struct city *)malloc(sizeof(struct city));
			
			this->filtro->cityId= codC;
			strcpy(this->filtro->city_name, name);
			this->filtro->m.hum = hum;
			this->filtro->m.temp = temp;
			this->filtro->m.time.day = day;
			this->filtro->m.time.month = month;
			this->filtro->m.time.hh= hh;
			this->filtro->m.time.mm= mm;
			this->filtro->next= nullptr;
			
			if(Empty(General)){
				General = filtro;
			}else{
				city *aux {General};
				
				while (aux->next!= nullptr){
					aux = aux->next;
				}
				aux->next = filtro;
			}
			this->General = General;

		if(codP==1){
			
			filtro = (struct city *)malloc(sizeof(struct city));

			
			this->filtro->cityId= codC;
			strcpy(this->filtro->city_name, name);
			this->filtro->m.hum = hum;
			this->filtro->m.temp = temp;
			this->filtro->m.time.day = day;
			this->filtro->m.time.month = month;
			this->filtro->m.time.hh= hh;
			this->filtro->m.time.mm= mm;
			this->filtro->next= nullptr;
			
			if(Empty(Cordoba)){
				Cordoba = filtro;
			}else{
				city *aux{Cordoba};
				
				while (aux->next!= nullptr){
					aux = aux->next;
				}
				aux->next = filtro;
			}	
			
			this->Cordoba = Cordoba;
			
		}else if(codP==3){
			
			
			filtro = (struct city *)malloc(sizeof(struct city));

			this->filtro->cityId= codC;
			strcpy(this->filtro->city_name, name);
			this->filtro->m.hum = hum;
			this->filtro->m.temp = temp;
			this->filtro->m.time.day = day;
			this->filtro->m.time.month = month;
			this->filtro->m.time.hh= hh;
			this->filtro->m.time.mm= mm;
			this->filtro->next= nullptr;
			
			if(Empty(Mendoza)){
				Mendoza =filtro;
			}else{
				city *aux{Mendoza};
			
			
				while (aux->next!= nullptr){
					aux = aux->next;
				}
				aux->next = filtro;
			
			}
			this->Mendoza = Mendoza;
			
		}else if(codP==2){
			
			
			filtro = (struct city *)malloc(sizeof(struct city));

			
			this->filtro->cityId= codC;
			strcpy(this->filtro->city_name, name);
			this->filtro->m.hum = hum;
			this->filtro->m.temp = temp;
			this->filtro->m.time.day = day;
			this->filtro->m.time.month = month;
			this->filtro->m.time.hh= hh;
			this->filtro->m.time.mm= mm;
			this->filtro->next= nullptr;
			
			if(Empty(Santa_fe)){
				Santa_fe = filtro;
			}else{
				city *aux {Santa_fe};
				
				while (aux->next!= nullptr){
					aux = aux->next;
				}
				aux->next = filtro;
			}
			
			this->Santa_fe = Santa_fe;
		}
	}
	delete fp;
	free (filtro);
}
void libreria::CHECK_NULL(FILE *fp){
	
	if(fp==nullptr){
		perror("Error no se a podido leer el archivo.\n");
		exit(1);
	}
	
}
int libreria::Get_Total(int i){//CANTIDAD DE MUESTRAS DE CADA PROVINCIA...
	
	
	int codP=0,codC=0;
	int  hh = 0, mm = 0, month = 0, day = 0;
	float hum = 0, temp = 0;
	char name[50] = {" "};
	int cont_Cordoba=0,cont_Santa_fe = 0,cont_Mendoza = 0;
	
	FILE *fp{fopen("data_set.txt","r")};
	CHECK_NULL(fp);
	
	
	while (!feof(fp)){
		
		fscanf(fp,"%d%d%s%f%f%d%d%d%d",&codC,&codP,&name[50],&temp,&hum,&hh,&mm,&day,&month);
		
		if(codP==i+1 && codP == 1){
			cont_Cordoba++;
		}else if (codP==i+1 && codP==2){
			cont_Mendoza++;
		}else if(codP==i+1 && codP==3){
			cont_Santa_fe++;
		}//Ingresamos los contadores de cada provincia
	}
	fclose(fp);
	
		//Returnamos los contadores teniendo en cuenta el bucle for en el codigo fuente main.
		if(i+1==1){
			return cont_Cordoba;
		}else if(i+1==2){
			return cont_Mendoza;
		}else{
			return cont_Santa_fe;
		}
	
}
float libreria::prom_temp_provincia(int i,float medir){
	
	float prom_cba=0, prom_men=0,prom_sf=0,total=0;
	int cont=0;
		
	if(i==1){
		if(Empty(this->Cordoba)){
			cout<<"La lista esta vacia."<<endl;
		}else{		
			city *aux = this->Cordoba;
			
			while(aux!=nullptr){
				cont++;
				total += aux->m.temp;
				aux=aux->next;
			}
			prom_cba = total / cont;
		}
		return prom_cba;
		
	}else if(i==2){
		if(Empty(this->Mendoza)){
			cout<<"La lista esta vacia."<<endl;
		}else{		
			city *aux {this->Mendoza};
			
			while(aux!=nullptr){
				cont++;
				total+=aux->m.temp;
				aux=aux->next;
			}
			prom_men = total / cont;
		}
		return prom_men;
		
	}else if(i==3){
		if(Empty(this->Santa_fe)){
			cout<<"La lista esta vacia."<<endl;
		}else{		
			city *aux = this->Santa_fe;
			
			while(aux!=nullptr){
				cont++;
				total+=aux->m.temp;
				aux=aux->next;
			}
			prom_sf = total / cont;
		}		
		return prom_sf;
	}
}
bool libreria::Empty(city *head){		//ESTA BANDERA ES USADA PARA CONPROBAR SI LAS LISTAS NO ESTAN VACIAS...
	return (head==nullptr)? true : false;
}
void libreria::prom_temp_ciudad(){//PROMEDIO DE LAS CIUDADES...
	
	float prom=0,suma=0;
	char text[50];
	int cont=0;
	int auxid=0; //ESTE AUXILIAR VA A CONTENER LOS ID DE LAS CIUDADES...
	
	
	if(Empty(this->General)){
		cout<<"La lista Cordoba esta vacia."<<endl;
	}
	else{		
		
		city *aux {this->General};
		auxid=aux->cityId;//IGUALAMOS EL AUXILIAR AL PRIMER ID...
		
		while(aux!=NULL){
			if(aux->cityId==auxid){//COMPRUEBA SI LOS ID COINCIDEN...
				cont++;//CONTADOR...
				suma+=aux->m.temp;//SUMADOR DE LAS TEMPERATURAS...
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
				}
			}else{
				prom=suma/(float)cont; 
				printf("El nombre de la ciudad es %s y su temperatura promedio es de: %.2f  \n",text,prom);//CALCULO Y PRINTEO DE LOS PROMEDIOS...
				cont=0; 
				prom=0, suma=0;
				auxid=aux->cityId;//PASA A CONTENER EL ID DE LA SIGUIENTE CIUDAD...
			}
			aux=aux->next;
		}
	}			
}			
void libreria::dia_frio_prov(){//CALCULO DEL DIA MAS FRIO...
	float menor=0;
	int dia=0,mes=0,temp=0;
	if(Empty(this->Cordoba)){
		cout<<"La lista esta vacia."<<endl;
		}else{		
			city *aux {this->Cordoba};
			while(aux!=nullptr){//RECORRE LA LISTA DE CORDOBA...
				if(aux->m.temp<menor){//VERIFICA QUE TEMPERATURA ES MENOR... 
					dia=aux->m.time.day;
					mes=aux->m.time.month;   //LOS CARGA EN LAS SIGUIENTES VARIABLES...
					temp=aux->m.temp;
				}
				
				aux=aux->next;
			}
			cout<<"El dia mas frio de Cordoba es el "<<dia<<" del "<<mes<<" con "<<temp<<endl;//cambiar printeo de numero a nombre del mes
		}
		if(Empty(this->Santa_fe)){
		cout<<"La lista esta vacia."<<endl;
		}else{		
			city *aux {this->Santa_fe};
			while(aux!=nullptr){//RECORRE LA LISTA DE SANTA FE...
				
				if(aux->m.temp<menor){//VERIFICA QUE TEMPERATURA ES MENOR...
					dia=aux->m.time.day;
					mes=aux->m.time.month;   //LOS CARGA EN LAS SIGUIENTES VARIABLES...
					temp=aux->m.temp;
				}
				
				aux=aux->next;
			}
			cout<<"El dia mas frio de Santa_fe es el "<<dia<<" del "<<mes<<" con "<<temp<<endl;//cambiar printeo de numero a nombre del mes
		}
		if(Empty(this->Mendoza)){
		cout<<"La lista esta vacia."<<endl;
		}else{		
			
			city *aux = this->Mendoza;
			
			while(aux!=NULL){   //RECORRE LA LISTA DE MENDOZA...
				
				if(aux->m.temp<menor){//VERIFICA QUE TEMPERATURA ES MENOR...
					dia=aux->m.time.day;
					mes=aux->m.time.month;//LOS CARGA EN LAS SIGUIENTES VARIABLES...
					temp=aux->m.temp;
				}

				aux=aux->next;
			}

			cout<<"El dia mas frio de Mendoza es el "<<dia<<" del "<<mes<<" con "<<temp<<endl;//cambiar printeo de numero a nombre del mes
		}
	}
void libreria::dia_calido_prov(){//DIA MAS CALIDO DE CADA CIUDAD...
	float mayor_temperatura=-99;
	char text[50];
	int auxid=0;
	int mes=0 , dia=0;
	
	if(Empty(this->General)){
		cout<<"La lista Cordoba esta vacia."<<endl;
	}else{		
		city *aux {this->General};
		
		auxid=aux->cityId;
		while(aux!=nullptr){//RECORRE LA LISTA GENERAL...
			
			if(aux->cityId==auxid){
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
					
				}
				if(aux->m.temp>mayor_temperatura)//BUSCA EL DIA QUE SE HAYA REGISTRADO LA MAYOR TEMPERATURA...
				{
					mes=aux->m.time.month;
					dia=aux->m.time.day;
				}
			}else{
				printf("El dia mas frio de %s fue el %d de %d \n",text,dia,mes);//PRINTEO DEL DIA...
				auxid=aux->cityId;
			}
			aux=aux->next;
		}
	}		
}
void libreria::pimientos(){//MEJOR PROVINCIA PARA EL CULTIVO DE PIMIENTOS...
	float prom_Cba=0,prom_Stafe=0,prom_Men=0;
	float diferencia1=0,diferencia2=0,diferencia3=0;
	prom_temp_provincia(1,prom_Cba);
	prom_temp_provincia(2,prom_Stafe);
	prom_temp_provincia(3,prom_Men);
	
	abs((int)prom_Cba);
	abs((int)prom_Men);
	abs((int)prom_Stafe);

	diferencia1 = 23 - (float)prom_Cba;
	diferencia2 = 23 - (float)prom_Stafe; //CALCULA QUE TEMPERATURA ES MAS SIMILAR A LOS 25�...
	diferencia3 = 23 - (float)prom_Men;

	if(diferencia1<diferencia2 && diferencia1<diferencia3){
		cout<<"Cordoba es la mejor provincia para cultivar pimientos"<<endl;
	}
	else if(diferencia2<diferencia3){
		cout<<"SantaFe es la mejor provincia para cultivar pimientos y solo para eso sirve"<<endl;
	}
	else{
		cout<<"Mendoza es la mejor provincia para cultivar pimientos"<<endl;
	}



}
void libreria::ciud_frio(){//CALCULO DE LA CIUDAD MAS FRIA...
	
	float prom=0,suma=0,menor_promedio=99;
	char text[50];
	int cont=0;
	int auxid=0;
	
	if(Empty(this->Cordoba)){
		cout<<"La lista Cordoba esta vacia."<<endl;
	}else{		
		city *aux{this->Cordoba};
		
		auxid=aux->cityId;
		
		while(aux!=nullptr){//CALCULA LOS PROMEDIOS DE LAS CIUDADES COMO EN EL INCISO N�3...
			
			if(aux->cityId==auxid){
				cont++;
				suma+=aux->m.temp;
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
				}
			}else{
				prom=suma/(float)cont;
				
				if(prom<menor_promedio)//GUARDA EN menorid y menor_promedio LOS DATOS DE LA CIUDAD...
				{
					menor_promedio=prom;
				}
				
				cont=0; 
				prom=0, suma=0;
				
				auxid=aux->cityId;
			}
			aux=aux->next;
		}
	}		
	printf("La ciudad mas fria de cordoba es %s con un promedio de: %.2f �\n",text,menor_promedio);//PRINTEO DE LA CIUDAD CON EL MENOR PROMEDIO...
	
	if(Empty(this->Santa_fe)){
		cout<<"La lista Santa Fe esta vacia."<<endl;
	}else{		
		city *aux {this->Santa_fe};
		
		auxid=aux->cityId;
		
		while(aux!=nullptr){//CALCULA LOS PROMEDIOS DE LAS CIUDADES COMO EN EL INCISO N�3...
			
			if(aux->cityId==auxid){
				cont++;
				suma+=aux->m.temp;
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
				}
			}else{
				prom=suma/(float)cont;
				
				if(prom<menor_promedio)//GUARDA EN menorid y menor_promedio LOS DATOS DE LA CIUDAD...
				{
					menor_promedio=prom;
				}
				
				cont=0; 
				prom=0, suma=0;
				
				auxid=aux->cityId;
			}
			aux=aux->next;
		}
	}		
	printf("La ciudad mas fria de Santa Fe es %s con un promedio de: %.2f �\n",text,menor_promedio);//PRINTEO DE LA CIUDAD CON EL MENOR PROMEDIO...
	
	if(Empty(this->Cordoba)){
		cout<<"La lista Mendoza esta vacia."<<endl;
	}else{		
		city *aux {this->Mendoza};
		
		auxid=aux->cityId;
		
		while(aux!=nullptr){//CALCULA LOS PROMEDIOS DE LAS CIUDADES COMO EN EL INCISO N�3...
			
			if(aux->cityId==auxid){
				cont++;
				suma+=aux->m.temp;
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
				}
			}else{
				prom=suma/(float)cont;
				
				if(prom<menor_promedio)//GUARDA EN menorid y menor_promedio LOS DATOS DE LA CIUDAD...
				{
					menor_promedio=prom;
				}
				
				cont=0; 
				prom=0, suma=0;
				
				auxid=aux->cityId;
			}
			aux=aux->next;
		}
	}		
	printf("La ciudad mas fria de Mendoza es %s con un promedio de: %.2f �\n",text,menor_promedio);//PRINTEO DE LA CIUDAD CON EL MENOR PROMEDIO...
}
void libreria::ciud_calido(){//CALCULO DE LA CIUDAD MAS CALIDA...
	float prom=0,suma=0,mayor_promedio=-99;
	char text[50];
	int cont=0,auxid=0;
	
	
	if(Empty(this->Cordoba)){
		cout<<"La lista Cordoba esta vacia."<<endl;
	}else{		
		city *aux {this->Cordoba};
		
		auxid=aux->cityId;
		while(aux!=nullptr){//CALCULA LOS PROMEDIOS DE LAS CIUDADES COMO EN EL INCISO N�3...
			
			if(aux->cityId==auxid){
				cont++;
				suma+=aux->m.temp;
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
				}
			}else{
				prom=suma/(float)cont;
				if(prom>mayor_promedio)//GUARDA EN mayorid y mayor_promedio LOS DATOS DE LA CIUDAD...
				{
					mayor_promedio=prom;
				}
				cont=0; 
				prom=0, suma=0;
				auxid=aux->cityId;
			}
			aux=aux->next;
		}
	}		
	printf("La ciudad mas calida de Cordoba es %s con un promedio de: %.2f �\n",text,mayor_promedio);//PRINTEO DE LA CIUDAD CON EL MAYOR PROMEDIO...
	
	if(Empty(this->Santa_fe)){
		cout<<"La lista Santa fe esta vacia."<<endl;
	}else{		
		city *aux {this->Santa_fe};
		
		auxid=aux->cityId;
		while(aux!=nullptr){//CALCULA LOS PROMEDIOS DE LAS CIUDADES COMO EN EL INCISO N�3...
			
			if(aux->cityId==auxid){
				cont++;
				suma+=aux->m.temp;
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
				}
			}else{
				prom=suma/(float)cont;
				if(prom>mayor_promedio)//GUARDA EN mayorid y mayor_promedio LOS DATOS DE LA CIUDAD...
				{
					mayor_promedio=prom;
				}
				cont=0; 
				prom=0, suma=0;
				auxid=aux->cityId;
			}
			aux=aux->next;
		}
	}		
	printf("La ciudad mas calida de Santa Fe es %s con un promedio de: %.2f �\n",text,mayor_promedio);//PRINTEO DE LA CIUDAD CON EL MAYOR PROMEDIO...
	
	if(Empty(this->Mendoza)){
		cout<<"La lista Mendoza esta vacia."<<endl;
	}else{		
		city *aux{this->Mendoza};
		
		auxid=aux->cityId;
		while(aux!=nullptr){//CALCULA LOS PROMEDIOS DE LAS CIUDADES COMO EN EL INCISO N�3...
			
			if(aux->cityId==auxid){
				cont++;
				suma+=aux->m.temp;
				for(int i=0;i<50;i++)
				{
					text[i]=aux->city_name[i];
				}
			}else{
				prom=suma/(float)cont;
				if(prom>mayor_promedio)//GUARDA EN mayorid y mayor_promedio LOS DATOS DE LA CIUDAD...
				{
					mayor_promedio=prom;
				}
				cont=0; 
				prom=0, suma=0;
				auxid=aux->cityId;
			}
			aux=aux->next;
		}
	}		
	printf("La ciudad mas calida de Mendoza es %s con un promedio de: %.2f �\n",text,mayor_promedio);//PRINTEO DE LA CIUDAD CON EL MAYOR PROMEDIO...
}
