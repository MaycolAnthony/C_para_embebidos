#include<stdint.h>
#include<stdio.h>
#include<windows.h>

/*typedef proporciona un mecanismo para la creacion de sinonimos (o alias)
para tipos de datos anteriormente definidos*/
/*typedef tipo_de_datos_ya_definido sinonimo*/

//Por ejemplo, la siguientes lineas define entero como sinonimo de int
//typedef definido sinonimo
typedef int entero;
typedef float flotante;
typedef char string;

entero numero=10;
flotante temperatura=26.7;
string nombre[]= "Maycol Anthony";

int main(void){
	printf("%u \n",numero);
	printf("%.1f \n",temperatura);
	printf("%s \n",nombre);
	return 0;
}