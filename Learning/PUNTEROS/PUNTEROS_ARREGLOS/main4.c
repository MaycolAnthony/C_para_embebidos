#include<stdio.h>
#include<stdint.h>

void incrementarValor(uint16_t *n);

uint16_t numero=90;

int main(void){
	printf("El valor de numero es %u\n",numero);
	incrementarValor(&numero);
	printf("El nuevo valor de numero es %u\n",numero);
	return 0;
}

//desarroloo de la funcion

void incrementarValor(uint16_t *n){
	*n=*n+4;
}