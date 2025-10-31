#include <stdio.h>
/**
 * main - Affiche la somme des nombres multiples de 3 ou 5 en dessous de 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
