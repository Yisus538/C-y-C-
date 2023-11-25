#ifndef LIBRERIA_H
#define LIBRERIA_H

typedef struct timestamp{//Snippet 3: Marcas de tiempo
	
	int day;
	int month;
	int hh;
	int mm;
	
}timestamp;
typedef struct measurement{//Snippet 2: Muestas meteorologicas
	
	float temp;
	float hum;
	timestamp time;
	
}measurement;
typedef struct city{//Snippet 1: Nodo de las estructuras       
	
	city* next;
	measurement m;
	int cityId;
	char city_name[50];
	
}city;


class libreria{

private:
	
	
	city* filtro = nullptr; //New Node	
	city* General = nullptr;//Lista General
	city* Cordoba = nullptr;//Lista Cba
	city* Mendoza = nullptr;//Lista Mendoza
	city* Santa_fe = nullptr;//Lista Santa Fe
	
	
public://EN ESTE PUNTO, SE ENCUENTRAN TODOS LOS METODOS DE LA CLASE.**
	libreria();
	void setData(int);
	int Get_Total(int);
	bool Empty(city*);
	void CHECK_NULL(FILE *);
	float prom_temp_provincia(int,float);			
	void prom_temp_ciudad();
	void dia_frio_prov();
	void dia_calido_prov();
	void pimientos();
	void ciud_frio();
	void ciud_calido();
	
};

#endif
