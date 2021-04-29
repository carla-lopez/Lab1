/*
 ============================================================================
 Name        : directivasDelProcesador.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CUBO(a) a*a*a
#define PI 3.14159

int main(void) {

	//int suma;
	//suma= PI + 3;
	int a = 3;

	printf("El cubo de la variable a es: %i\n",CUBO(a));
	return 0;

}


/*Directivas del preprocesador: son las que contienen librerias y macros.
 *
 * las constantes son inmutables
 *
 */
