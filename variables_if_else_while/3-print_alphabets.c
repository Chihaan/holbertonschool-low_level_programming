#include <stdio.h>
/**
 * main - Entry point
 * Déclaration de c et C type char
 * Boucle for 1 : affiche l'alphabet en minuscule
 * Boucle for 2 : affiche l'alphabet en majuscule
 * putchar de newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
