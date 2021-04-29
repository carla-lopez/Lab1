/*
 ============================================================================
 Name        : funcionesDeRetorno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* las funciones que comienzan con void,no van a retornar
 * ningun valor.Nosotros declaramos nuestras funciones por
 * el tipo de dato que queremos retornar
 *
 */
#include <stdio.h>
#include <stdlib.h>
int suma();
int num3 = 2; //variable global
int main(void) {

	int num1,num2;
	printf("Ingresa el primer valor: \n");
	scanf("%i",&num1);
	printf("Ingresa el segundo valor: \n");
	scanf("%i",&num2);
	printf("El resultado es : %i\n",suma(num1,num2));
	return EXIT_SUCCESS;
}
int suma(int num1, int num2)//especificar que tipo de datos son
{
    int suma= num1 + num2 + num3;
	return suma;
}
