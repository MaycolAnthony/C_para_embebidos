/*ESTRUCTURAS PARA CAMPOS DE BITS:
los campos de bits son miembros ordinarios de una estructura y tienen 
un ancho de bits especifico. A menudo se utilizan con uniones para 
proporcionar acceso de bits a una variable sin operaciones de enmascaramiento.
*/
#include<stdio.h>
#include<stdint.h>
#include<string.h>

typedef struct{
	uint8_t TRISD0:1;
	uint8_t TRISD1:1;
	uint8_t TRISD2:1;
	uint8_t TRISD3:1;
	uint8_t TRISD4:1;
	uint8_t TRISD5:1;
	uint8_t TRISD6:1;
	uint8_t TRISD7:1;
}TRISDbits_t;
TRISDbits_t TRISDbits;
int main(void){
	TRISDbits.TRISD0=1;
	TRISDbits.TRISD7=0;
	
	printf("Bit 0 del TRISD: %u \n",TRISDbits.TRISD0);
	printf("Bit 7 del TRISD: %u \n",TRISDbits.TRISD7);
	return 0;
}
