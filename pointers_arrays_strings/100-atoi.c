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
	int res = 0, sign = 1;
	char *sp = s;


	int INT_MAX = 2147483647;
	int INT_MIN = (-INT_MAX - 1);


	while (*sp != '\0')
	{
		if (*sp == '-')
			sign = sign * -1;
		else if (*sp >= '0' && *sp <= '9')
		{
			int digit = *sp - '0';

			if (sign == 1)
			{
				if (res > (INT_MAX - digit) / 10)
					return (INT_MAX);
					res = res * 10 + digit;
			}
			else
			{
				if (res > (-(INT_MIN + digit)) / 10)
					return (INT_MIN);
					res = res * 10 - digit;
			}
			res = res * 10 + (*sp - '0');
		}
		else if (res != 0)
			break;
		sp++;
	}
	return (res * sign);
}
