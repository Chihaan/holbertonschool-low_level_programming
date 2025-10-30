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

	while (*os != '\0')
	{
		if (*os >= '0' && *os <= '9')
		{
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
