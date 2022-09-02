/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 3-1 funciones

 Crear una función que muestre por pantalla el número entero que
 recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void numeroMostrado(int numero);

int main(void)
{
	setbuf(stdout, NULL);
	int numeroIngresado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	numeroMostrado(numeroIngresado);

	return 0;
}

void numeroMostrado(int numero)
{
	printf("El numero ingresado es: %d", numero);
}
