#include<stdint.h>
#include<stdio.h>
#include<windows.h>

// los arreglos tienen que ser de la mismacategoria(int, float,etc)
uint16_t muestrasADC[6]={600,512,420,450,510,535};
//						  0   1   2   3   4   5
float muestraTemp	[5]={24.9,34.1,25.2,23.4,22.5};
//					      0    1    2    3     4
char nombreCurso[6]	   ={'A','N','C','I',' ','C'};
//                       0   1   2   3   4   5
float promedioTemp;
uint8_t indice;


int main(void){
	printf("El valor de muestrasADC indice 1: %u \n",muestrasADC[1]);
	printf("El valor de muestraTemp indice 2: %.1f \n",muestraTemp[2]);
	
	//Ahora recorremos todos los indices de nuestro arreglo con un bucle:
	indice=0;
	while(indice <6){
		printf("El valor de muestrasADC[%u]: %u \n",indice,muestrasADC[indice]);
		indice++;
	}
	printf("\n \n");
	for(indice=0;indice<5;indice++){
		printf("Valor de muestraTemp[%u]: %.1f \n ",indice,muestraTemp[indice]);
		promedioTemp+=muestraTemp[indice];
		
	}
	promedioTemp/=5;
	printf("\n \n");
	printf("El promedio de las muestrasTemp es :%.2f\n",promedioTemp);
	
	
	
	
	return 0;
}