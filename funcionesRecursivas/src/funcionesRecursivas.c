/*
 ============================================================================
 Name        : funcionesRecursivas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * funciones recursivas: funciones que se llaman a si mismas
 * ejemplo mas famoso es el ejercicio de factorial
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int numero);

int main(void) {
	int numero;
	printf("Ingresa un numero: \n");
	scanf("%i",&numero);
	for(int i= 0; i<=numero;i++)
	{
		printf("%i\n",factorial(i));
	}
	return EXIT_SUCCESS;
}

int factorial(int numero)
{
	if(numero<=1)
	{
		return 1;
	}else
	{
		return(numero * factorial(numero - 1));
	}
}

//set es para escribir
//get es para obtener
