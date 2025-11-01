#include "main.h"
#include <stdio.h>
/**
 * main - calcule la somme des termes pairs de Fibonacci ≤ 4 000 000
 *
 * Description: Ce programme génère les termes de la suite de Fibonacci
 * en commençant par 1 et 2. Il additionne seulement les nombres pairs
 * tant qu'ils ne dépassent pas 4 000 000, puis affiche la somme finale.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	long first = 1, second = 2, next = 0, result = 2;

	while (next < 4000000)
	{
		next = first + second;
		first = second;
		second = next;
			if (next % 2 == 0)
				result = result + next;
	}
	printf("%ld\n", result);
	return (0);
}
