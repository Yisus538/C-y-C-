#ifndef LIBRERIA_H
#define LIBRERIA_H

struct timestamp{//Snippet 3: Marcas de tiempo
	
	int day;
	int month;
	int hh;
	int mm;
	
};
struct measurement{//Snippet 2: Muestas meteorologicas
	
	float temp;
	float hum;
	timestamp time;
	
};
typedef struct city{//Snippet 1: Nodo de las estructuras       
	
	struct city *next;
	measurement m;
	int cityId;
	char city_name[50];
	
}city;


class libreria{

private:
	
	
	city *filtro = nullptr; //New Node	
	city *General = nullptr;//Lista General
	city *Cordoba = nullptr;//Lista Cba
	city *Mendoza = nullptr;//Lista Mendoza
	city *Santa_fe = nullptr;//Lista Santa Fe
	
	
public://EN ESTE PUNTO, SE ENCUENTRAN TODOS LOS METODOS DE LA CLASE.**
	libreria();
	void setData(int i);
	int Get_Total(int i);
	bool Empty(city *);
	void CHECK_NULL(FILE *);
	float prom_temp_provincia(int i,float medir);			
	void prom_temp_ciudad();
	void dia_frio_prov();
	void dia_calido_prov();
	void pimientos();
	void ciud_frio();
	void ciud_calido();
	
};

#endif
