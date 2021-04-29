/*
 ============================================================================
 Name        : punterosLlamadasPorReferencia.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* +punteros: existen dos maneras de pasar argumentos a una funcion, por llamadas por valor,por llamadas
 * por referencia:
 * Llamadas por referencia: evita sobrecargas(copias del objeto o variable)
 *
 */

#include <stdio.h>
#include <stdlib.h>

void cubo(int *n); //tipo void: no estan obligadas a devolver un valor
int main(void) {

	int num= 5; // definimos una variable num en 5
	printf("Valor original %i\n",num);//imprimimos nuestro valor num
	cubo(&num);//a nuestra funcion,le pasamos como parametro  la referencia del numero (entra void cubo(int *n)
	printf("El nuevo valor: %i\n",num);//imprimimos el nuevo valor

	return EXIT_SUCCESS;
}
void cubo(int *n)/*void: nuestra funcion no va a devolver ningun valor, en este caso va a recibir el parametro
que nosotros le enviamos del main, lo va a recibir como *n y lo va a utilizar dentro de la funcion
va a ser la referencia para imprimir nuestro valor*/
{

	*n = *n * *n * *n;

}
