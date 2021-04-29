/*
 ============================================================================
 Name        : breakAndContinue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * break y continue nos permiten manejar el flujo de nuestro programa
 * como queramos. break termina o se sale de la ejecucion,por ejemplo
 * de algun ciclo, y continue nos permite seguir ejecutando pero salta
 * un paso
 *
 */
int main(void) {

	int num = 0;
	while(num<=7)
	{
		if(num ==2) //cuando llega a 2, el ciclo se rompe y deja de ejecutarse
		{
			break;
			//continue;
		}
		printf("%i",num);

		num++;
	}


	return EXIT_SUCCESS;
}

/* con continue, tengo que incrementar antes de preguntar(if)
 * por eso se pone el num++ antes del bucle if (dentro del if salta el valor 2)

int main()
{
	int num=0;
	while(num<=7)
	{
		num++;
		if(num ==2)
		{
			continue;

		}
		printf("%i",num);
	}
	return EXIT_SUCCESS;
}
*/
