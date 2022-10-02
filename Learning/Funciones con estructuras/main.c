/* ESTRUCTURAS COMO PARAMETROS DE FUNCION
 -Las estruras se pueden pasar como parametros a una funcion.
 -Su funciinamiento es identico a lostipos de datos simples, 
  es decir que se hacen una copia de la variable de tipo struct
  en el parametro.
 -No podemos modificar la variable que le enviamos a la funcion 
 sino solo accederlo para consultarlo.
 */
#include<stdint.h>
#include<stdio.h>
#include<string.h>

typedef struct{
	uint16_t codigo;
	char descripcion[50];
	float precio;
}Producto_t;

Producto_t p1={184550,"MUC PIC18F4550 - Microchip",4.5};
Producto_t p2={328,"MUC ATmega328PB - Microchip",2.45};
Producto_t p3={184550,"MUC TM4C123H6 - Texas Instruments",6.9};

void getProducto(uint8_t nroProd,Producto_t px);

int main (void){
	getProducto(1,p1);
	getProducto(2,p2);
	getProducto(3,p3);
	return 0;
}

//Desarrollo de la funcion
void getProducto(uint8_t nroProd,Producto_t px){
	printf("Nro de Producto %u \n",nroProd);
	printf("Codigo	   : %u \n",px.codigo);
	printf("Descripcion: %s \n",px.descripcion);
	printf("Precio	   : %.2f \n",px.precio);
	printf("\n\n\n");
}