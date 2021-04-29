/*
 ============================================================================
 Name        : arregloDeEstructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*arrays de estructuras: nos permiten almacenar dentro de un array varias variables de estructura
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct perro
{
	char nombre[30];
	int edadMeses;
	float peso;
}perros[2]; //el usuario va a cargar su perro


int main(void) {

	for(int i= 0; i< 2;i++) //ciclo para que vaya almacenando mis valores(pedir valores y almacenarlos)
	{
		printf("%i Ingresa el nombre del perro: \n",i+1); //en la primer iteracion va a ser 1
		scanf("%s",&perros[i].nombre); //%s por que vamos a guardar una cadena de caracteres
		printf("%i Ingresa la edad en meses del perro: \n",i+1);
		scanf("%i",&perros[i].edadMeses);
		printf("%i Ingrese el peso del perro: \n",i+1);
		scanf("%f",&perros[i].peso);
	}
	for(int i =0; i<2;i++) //ciclo para poder imprimir esos valores
	{
		printf("%i El nombre del perro es: %s\n",i+1,perros[i].nombre);
		printf("%i La edad en meses del perro es: %i\n",i+1,perros[i].edadMeses);
		printf("%i El peso del perro es: %.2f\n",i+1,perros[i].peso);

	}

	return EXIT_SUCCESS;
}
