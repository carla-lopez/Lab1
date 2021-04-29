/*
 ============================================================================
 Name        : estructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Estructura: una estructura es una coleccion de uno o mas tipos de elementos denominados
 * miembros. Estos miembros pueden ser de un tipo de datos diferentes
 *
 */

#include <stdio.h>
#include <stdlib.h>
struct perro
{
	char nombre[30];
	int edadMeses;
	float peso;
}perro1={"Chikorita",10,3.50},
perro2={"Arduino",4,2.30};

int main(void) {


	printf("El peso de %s es de %.2f Kg y tiene %i meses \n",perro2.nombre,perro2.peso,perro2.edadMeses);

	return EXIT_SUCCESS;
}
