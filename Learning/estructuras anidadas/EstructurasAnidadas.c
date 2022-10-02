/*Anidamientos de estructuras:
Una estructura puede estar dentro de otra estructura, 
a esto de le conoce como anidamiento o estructuras anidadas. 

Ejemplo:
Necesitamos crear una estructura ara crear datos de un empleado

Campos:
Empleado
-Nombre 
-Informacion de la direccion del empleado
   -Departamento
   -Provincia
   -calle
- Salario*/

#include<stdint.h>
#include<stdio.h>
#include<string.h>

//Donde vive el empleado
typedef struct{
	char direccion[50];
	char ciudad[20];
	char provincia[20];
}InfoDireccion_t;

//Informacion general del empleado
typedef struct{
	char nombre[50];
	InfoDireccion_t infoDir;
	float salario;
}Empleado_t;

Empleado_t empleado1, empleado2;

int main(void){
	
	strcpy(empleado1.nombre,"Juan Manuel");
	strcpy(empleado1.infoDir.direccion,"Av Peru, Nro 1234");
	strcpy(empleado1.infoDir.ciudad,"Lima");
	strcpy(empleado1.infoDir.provincia,"Callao");
	empleado1.salario=1200.45;
	
	printf("Datos del empleado 1: \n");
	printf("Nombre :%s \n",empleado1.nombre);
	printf("Direccion: %s -%s - %s \n",empleado1.infoDir.direccion,
										empleado1.infoDir.ciudad,
										empleado1.infoDir.provincia);
	printf("Salario :%.2f \n",empleado1.salario);
	
	
	
	return 0;
	
}

