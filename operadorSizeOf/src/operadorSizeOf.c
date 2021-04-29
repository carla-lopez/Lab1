/*
 ============================================================================
 Name        : operadorSizeOf.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 * sizeof: determina el tamaño en bites de un arreglo o cualquier tipo de dato.
 * aparece durante la compilacion del programa
 * size_t : tipo de entero, retorna en un valor sin signo(solo positivos
 */

#include <stdio.h>
#include <stdlib.h>

size_t getsize(float *ptr);

int main(void) {

	float array[20];
	printf("EL numero de bytes en el arreglo es: %lu\n",sizeof(array));
	printf("EL numero de bytes devueltos por getzise es: %lu\n",getsize(array));

	return EXIT_SUCCESS;
}
size_t getsize(float *ptr)
{

	return sizeof(ptr);
}
