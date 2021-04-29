/*
 ============================================================================
 Name        : cicloWhile.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*while: nos permite especificar una accion,mientras la condicion sea verdadera
 *
 */

int main(void) {

	int contador=1;
	while(contador <= 10)
	{
		printf("%i\n",contador);
		contador++;
	}


	return EXIT_SUCCESS;
}
