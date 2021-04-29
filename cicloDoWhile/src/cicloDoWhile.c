/*
 ============================================================================
 Name        : cicloDoWhile.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * do while: permite ejecutar un bloque de instrucciones y despues evalua una condicion
 *
 */

int main(void) {

	int contador = 1;
	do{//imprimir o pedir un dato

		printf("%i\n",contador); //este bucle ejecuta primero las instrucciones y despues pregunta
		//este bucle siempre se va a ejecutar por lo menos una vez
		contador++;


	}while(contador <=10);

	return EXIT_SUCCESS;
}
