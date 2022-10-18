#include<stdio.h>
#include<stdint.h>
#include<string.h>


uint16_t x=90,y=80,z=20;
// *p es la variable del puntero, y &x es a donde esta referenciandose, a la direccion de memoria de la variable x
uint16_t *p= &x;//P es un puntero a x
int main(void){
	//Existen 2 formas de acceder a la variable x
	//primera forma:
	printf("Valor x: %u \n",x);
	//segunda forma
	//desferenciar el puntero
	printf("Valor x: %u \n",*p);
	//mediante punteros accede indirecctamente al valor que esta apuntando el puntero
	//mediante punteros se puede modificar indirectamente la variable, por ejemplo:
	*p=100;//x=100
	printf("Valor x: %u \n",x);
	printf("Valor x: %u \n",*p);
	
	
	
}