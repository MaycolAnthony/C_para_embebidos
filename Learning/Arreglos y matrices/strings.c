#include<stdint.h>
#include<stdio.h>
#include<windows.h>
char vector[4]={'H','o','l','a'};//Un vector de 4 elementos 

//cadenas:

char cadenaHola[5]={'H','o','l','a','\0'};
char otroHola[]="Hola";//El compilado le asigna el tamaño[]
char cadena2[20]="Una cadena en C";


int main(void){
	printf("%s \n",cadenaHola);
	printf("%s",cadena2);
	
	
	return 0;
	
}