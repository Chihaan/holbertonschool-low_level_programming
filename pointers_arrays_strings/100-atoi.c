#include "main.h"
/**
 * _atoi - Convertit une chaîne en entier.
 * @s: La chaîne à convertir.
 *
 * Parcourt la chaîne, gère les signes '-', récupère les chiffres
 * et s’arrête dès qu’un caractère
 * non numérique apparaît après un nombre.
 * Return: L’entier obtenu avec le bon signe.
 */
int _atoi(char *s)
{
	int r = 0, n = 1;
	char *os = s;
	int INT_MAX = 2147483647;
	int INT_MIN = (-INT_MAX - 1);

	while (*os != '\0')
	{
		if (*os >= '0' && *os <= '9')
		{
			int digit = *os - '0';

			if (n == 1)
			{
				if (r > (INT_MAX - digit) / 10)
					return (INT_MAX);
			}
			else
			{
				if (r > (-(INT_MIN + digit)) / 10)
					return (INT_MIN);
			}
			r = r * 10 + (*os - '0');
		}
		else if (*os == '-')
			n = n * -1;
		else if (r != 0)
			break;
		os++;
	}
	return (r * n);
}
