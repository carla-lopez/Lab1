/*
 ============================================================================
 Name        : arreglos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * arreglos(arrays): son un conjuntos de datos que se van almacenando dentros de variables
 * variables: una caja donde se pueden almancenar cosas (solo tienen que ser de un solo tipo)
 * en este caso,los arreglos(arrays)nos permiten guardar un solo dato.Los arreglos son conocidos
 * como una entidad estatica, ya que al declararla no van a cambiar su tamaño hasta que dure
 * la ejecucion del programa
 * arreglos: siempre inician con la posicion 0
 * Existen dos tipos de arreglos: unidimensionales y multidimensionales(o matrices)
 *
 *  */


/*
int main(void) {

	int arreglo[4]= {3,4,1,5}; //int(char,float,etc) arreglo[dimension del arreglo]
	printf("%i",arreglo[2]); //si el arreglo es 2, me va a salir 1 en la consola

	return EXIT_SUCCESS;
}*/


//ejemplo pedir al usuario que ingrese el tamaño del array

/*
int main()
{
	int sizeA;//tamaño del arreglo
	printf("Tamaño del arreglo\n");
	scanf("%i",&sizeA);
	int age[sizeA];
	for(int i =0 ; i < sizeA ; i++)
	{//rellenar arreglo

		printf("Ingresa el valor %i\n",i+1);//i+1 para que no empiece en 0
		scanf("%i",&age[1]);
	}

	printf("Los valores del arreglo son: \n");
	for(int i=0;i< sizeA; i++)
	{//imprimir el valor que tiene el array

		printf("%i-\n",age[i]);

	}
	printf("\n");

return EXIT_SUCCESS;
}
*/

//arreglo multidimensional

int main()
{
	int multi[2][3]= {{3,3,1},{6,4,2}};/*se diferencia por tener dos corchetes
	               donde el primero contiene nuestras filas
	               y el segundo las columnas*/
	printf("%i\n",multi[0][2]);


	return EXIT_SUCCESS;
}
