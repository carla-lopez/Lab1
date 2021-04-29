/*
 ============================================================================
 Name        : punterosBasico.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*punteros: son variables cuyos valores son direcciones de memoria ,por lo general
 * una variable contiene un valor especifico. El puntero contiene la direccion de una
 * variable que contiene un valor especifico. cuando declaramos una variable le informamos
 * al compilador dos cosas : el nombre de nuestra variable y el tipo de dato de la variable.
 * (todas las variables se guardan en espacio de memoria).En c nos podemos referirnos a una variable
 * como objeto(conjunto que define a nuestra variable)
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 2;
	int *apt= &a;
	printf("%i\n",*apt);// sin el *, te da como resultado el espacio de la memoria donde se esta alojando apt

	return EXIT_SUCCESS;
}
