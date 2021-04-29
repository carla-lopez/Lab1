/*
 ============================================================================
 Name        : cicloFor.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int contador; //nos va a servir para ir iterando o ir avanzando en nuestro ciclo
	for(contador= 1; contador <=10; contador++)/*inicializa el contador en 1, en la primera vuelta va a valer 1 y se va a cumplir
	la condicion, mientras se cumpla contador <= 10, el ciclo va a seguir activo,pero si no se cumple el ciclo se cierra*/
	{
		printf("%i\n",contador);

	}

	return EXIT_SUCCESS;
}
