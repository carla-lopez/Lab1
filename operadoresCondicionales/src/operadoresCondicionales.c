/*
 ============================================================================
 Name        : operadoresCondicionales.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int edad;
	printf("Ingresa tu edad: \n");
	scanf("%d",&edad);

	if(edad >= 18)
	{
		printf("Eres mayor de edad\n");
	}
	else if(edad==17)
	{
		printf("Sorry bro,casi eres mayor de edad\n");
	}
	else
	{
		printf("Eres menor de edad\n");
	}
	return 0;
}
