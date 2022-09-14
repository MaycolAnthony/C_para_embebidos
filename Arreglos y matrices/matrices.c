#include<stdint.h>
#include<stdio.h>
#include<windows.h>

//matrix [filas][columnas]
 //						  C0  C1  C2  C3
char teclado4x4 [4][4]={ {'1','2','3','A'},  //FILA 0
						 {'4','5','6','B'},  //FILA 1
						 {'7','8','9','C'},  //FILA 2
						 {'*','0','#','D'}}; //FILA 3
						
uint8_t filas, columnas;

uint8_t miArreglo[4];//0 1 2 3

int main(void){
	
	//se puede guardar desordnadamente
	miArreglo[0]:28;
	miArreglo[3]:92;
	miArreglo[2]:26;
	miArreglo[1]:49;
	printf("[0]: %u \n", miArreglo[0]);
	printf("[1]: %u \n", miArreglo[1]);
	printf("[2]: %u \n", miArreglo[2]);
	printf("[3]: %u \n", miArreglo[3]);
	
	for(filas=0;filas<4;filas++){
		for(columnas=0;columnas<4;columnas++){
		printf("%c ",teclado4x4[filas][columnas]);
		Sleep(500);
		}
		printf("\n");
	}
	
	printf("La tecla es : %c \n",teclado4x4[3][0]);
	return 0;
}