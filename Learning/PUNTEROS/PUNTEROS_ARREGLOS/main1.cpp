#include<stdint.h>
#include<stdio.h>

uint16_t datos[6]={12,23,44,66,81,107};
uint16_t *ptr;

int main(void){
	ptr=datos;
	printf("Valor de datos[0]: %u\n",*ptr);
	ptr++;//Aritmetica de punteros
	printf("Valor de datos[1]: %u\n",*ptr);
	(*ptr)++;//Aritmetica normal
	printf("Nuevo Valor de datos[1]: %u\n",*ptr);
	ptr+=2;//Aritmetica de punteros
	printf("Valod de datos[3]: %u\n",*ptr);
	ptr-=3;//Aritmetica de punteros
	printf("Valod de datos[0]: %u\n",*ptr);

	return 0;
}