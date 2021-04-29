/*
 ============================================================================
 Name        : estructurasAnidadas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*estructuras anidadas: siempre se encuentran dentro de otra estructura.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define length 2

struct owner //dueño
{
	char nombre[20];
	char direccion[30];
};

struct dog
{
	char nombre[20];
	int edadMeses;
	struct owner ownerDog;/*llamo a dueño dentro de perro,poniendo una estructura dentro de la
	estructura de dog,donde se hace mension de la estructura owner y creo una variable:
	struct owner ownerDog (estructura anidada)*/

}dogs[length];
int main(void) {

	for(int i =0;i<length;i++) //ir pidiendo los datos
	{
		printf("Nombre del perro\n");
		scanf("%s",dogs[i].nombre);
		printf("Edad del pero en meses\n");
		scanf("%i",&dogs[i].edadMeses);
		printf("Nombre del dueño\n");
		scanf("%s",dogs[i].ownerDog.nombre);/*como creamos la estructura ownerDog dentro de la
		estructura dogs, llamo a la variable ownerDog para pedir el nombre del dueño,ya que esa
		variable me va a conectar con la estructura owner(dueño)*/
		printf("Direccion\n");
		scanf("%s",dogs[i].ownerDog.direccion);
		printf("\n"); //C no permite utiizar espacios,asi que no hay que usarlo tanto
	}
	for(int i = 0; i< length;i++) //ciclo para imprimir los valores que ingrese el usuario
	{
		printf("El nombre del perro es: %s\n",dogs[i].nombre);
		printf("Edad en meses del perro: %i\n",dogs[i].edadMeses);
		printf("EL nombre del dueño es: %s\n",dogs[i].ownerDog.nombre);
		printf("La direccion del dueño es: %s\n",dogs[i].ownerDog.direccion);
	}

	return EXIT_SUCCESS;
}
