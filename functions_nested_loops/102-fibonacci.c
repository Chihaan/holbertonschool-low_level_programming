#include "main.h"
#include <stdio.h>
/**
 * main - affiche les 50 premiers nombres de Fibonacci
 *
 * Description: Ce programme affiche les 50 premiers nombres
 * de la suite de Fibonacci, en commençant par 1 et 2.
 * Les nombres sont séparés par des virgules et des espaces.
 * Le type 'long long' est utilisé pour éviter le dépassement.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	long i, first = 1, second = 2, next;

	printf("%ld, %ld", first, second);

	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
