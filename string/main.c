/* 
strlen(cadena):
Calcula la longitud de cadena sin incluir el caracter nulo de terminacion
------------------------------------------------------------------------------------
strcmp(cadena1,cadena2):
compara 2 cadenas, caracter o caracter, si son iguales la funcion devuelve un si
son diferentes te devuelve un numero diferente a cero.
0==strcmp(cadena1,cadena2)--> si las cadenas son iguales
0!=strcmp(cadena1,cadena2)--> si las cadenas son diferentes

-------------------------------------------------------------------------------------
strstr(cadena1,subcadena):
Busca cierta subcadena dentro de una cadena de texto. Devuelve NULL si no la contiene, 
o en caso contrario un puntero a la posicion en que se encuentra
--------------------------------------------------------------------------------------
strcpy(cadena_destino,cadena_fuente):
Copia cadena_fuente a cadena_destino
--------------------------------------------------------------------------------------
strcat(cadena_destino,cadena_fuente):
añade una cadena fuente al final de destino(concatena), cadena destino tiene que tener 
un tamaño tal que pueda albergar a cadena resultante
--------------------------------------------------------------------------------------
memset(cadena1,caracter,n): sobre escribe un area de memoria con patron de bytes dado
cadena1: cadena a modificar
caracter: valor a escribir en cada uno de los primeros n bytes
n: cantidad de bytes a modificar en cadena1
--------------------------------------------------------------------------------------
strtk(str,delim):
parte la cadena str en una secuencia de tokens usando el delimitador delim
--------------------------------------------------------------------------------------
strrev(cadena1):
invierte el string cadena1
-------------------------------------------------------------------
strcspn(cadena1,cad):
devuelve la posición del primer carácter que coincide con alguno de 
los caracteres de otra cadena dada
--------------------------------------------------------------------
strncpy(nuevacad,cadena1,4):
copia los n primeros caracteres de una cadena en otra
------------------------------------------------------------------------
strncat(cadena1,cadena2,16):
añade los n primeros caracteres de una cadena al final de otra
------------------------------------------------------------------------
strpbrk(string1, string2):
encuentra la primera ocurrencia de alguno de los caracteres de una cadena dada en otra
*/

#include<stdint.h>
#include<stdio.h>
#include<string.h>

char texto1[]="Biblioteca <string.h> para el manejo de cadenas";
char claveUsuario[]="ANSI C";
char claveIngresada[]="ANSI Z";
char curso[50];
char nombresApellidos[60]="Maycol Anthony ";
char cadena1[]="Hola mundo";
char cad[]="la";
char nuevacad[]="";
char cadena2[]=", saluda Maycol. Aprendan ANSI C";
char string1[]="abcde2fghi3jk4l";
char string2[] = "34";
char *ret;

uint8_t posicion;
uint8_t longitudCad;
int main(void){
	//strlen(cadena):
	longitudCad=(uint8_t)strlen(texto1);
	printf("Longitud de texto: %u \n",longitudCad);
	
	//strcmp(cadena1,cadena2):
	if (0==strcmp(claveUsuario,claveIngresada)){
		printf("La clave es correcta, puede ingresar al sistemas \n");
	}
	else{
		printf("Clave erronea\n");
	}
	//strstr(cadena1,subcadena)
	
		//detectar si dentro del texto1 se encuentra la subcadena "Biblioteca"
	if(NULL!=strstr(texto1,"Biblioteca")){
		printf("La Sub cadena 'Biblioteca'  ha sido  encontrado \n");
	}
	else{
		printf("Sub cadena no ha sido encontrada \n");
	}
	
	//strcpy
	printf("El contenido inicial de cadena curso es: %s \n",curso);
	strcpy(curso,"Lenguaje ANSI C");
	printf("El NUEVO contenido de cadena curso es: %s \n",curso);
	
	//strcat
	printf("El contenido inicial de cadena es: %s \n",nombresApellidos);
	strcat(nombresApellidos,"Salvador Lopez");
	printf("El NUEVO contenido de cadena es: %s \n",nombresApellidos);
	
	//memset
	printf("El contenido inicial de texto1 es: %s \n",texto1);
	memset(texto1,'A',5);
	printf("El nuevo contenido de texto1 es: %s \n",texto1);

	//strrev:
	printf("Cadena1 es : %s \n",cadena1);
	printf("La NUEVA cadena1 es : %s\n",strrev(cadena1));
	strrev(cadena1);
	//strcspn
	posicion=strcspn(cadena1,cad);
	printf("la se encuentra en la posicion %d de la cadena\n",posicion);
	//strncpy
	strncpy(nuevacad,cadena1,4);
	printf("Los primeros 4 caracteres de cadena1 son: %s \n",nuevacad);
	//strncat
	printf("Cadena1 es : %s \n",cadena1);
	strncat(cadena1,cadena2,16);
	printf("La nueva cadena 1 es: %s \n",cadena1);
	//strpbrk
	ret = strpbrk(string1, string2);
    if(ret){
       printf("Primer caracter coincidente: %c\n", *ret);
    } 
	else{
       printf("Caracter no encontrado");
    }
	
	return 0;
}