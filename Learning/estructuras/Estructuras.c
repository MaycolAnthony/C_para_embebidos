#include<stdint.h>
#include<stdio.h>
#include<string.h>

struct Camisa_t{
	char marca[50];
	char modelo[50];
	uint16_t id;
	float talla;
	float precio;	
};
//Crear un objeto de tipo Camisa_t
struct Camisa_t camisa1={"Hypnotic","XYZ",1206,15.5,120.45};
struct Camisa_t camisa2;

int main(void){
	//obtener datos del objeto camisa1
	printf("Datos de camisa 1:\n");
	printf("Marca: %s\n",camisa1.marca);
	printf("Modelo: %s\n",camisa1.modelo);
	printf("Precio: %.2f\n",camisa1.precio);
	printf("Talla: %.2f \n",camisa1.talla);
	printf("ID	: %u \n",camisa1.id);
	
	
	//escribir los datos para el objeto camisa2
	strcpy(camisa2.marca,"Lacoste");
	strcpy(camisa2.modelo,"ABC");
	camisa2.id=2945;
	camisa2.talla=16.5;
	camisa2.precio=98.78;
	printf("\n \n\n");
	//obtener datos del objeto camisa2
	printf("Datos de camisa 2:\n");
	printf("Marca: %s\n",camisa2.marca);
	printf("Modelo: %s\n",camisa2.modelo);
	printf("Precio: %.2f\n",camisa2.precio);
	printf("Talla: %.2f \n",camisa2.talla);
	printf("ID	: %u \n",camisa2.id);
	
}
