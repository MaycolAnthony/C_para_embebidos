#include<stdint.h>
#include<stdio.h>
#include<string.h>
char texto[]="Especializacion ANSI C";
char *pString=NULL;
char *str="Microchip Technology Inc";


int main(void){
	pString=texto;
	while(*pString !='\0'){
		printf("%c",*pString);
		pString++;//aritmetica de punters
	}
	printf("\n");
	while(*str !='\0'){
		printf("%c",*str);
		str++;//aritmetica de punters
	}

	return 0;
}