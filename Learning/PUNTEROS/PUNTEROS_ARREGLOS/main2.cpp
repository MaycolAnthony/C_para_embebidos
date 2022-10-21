#include<stdint.h>
#include<stdio.h>

uint16_t datos[6]={12,23,44,66,81};
uint16_t *ptr;
uint8_t indice;
int main(void){
	ptr=datos;
	for(indice=0;indice<6;indice++){
		printf("El valor de datos[%u]:%u\n"indice,*ptr);
		ptr++;
	}

	return 0;
}