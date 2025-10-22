#include "main.h"
/**
 * _islower - vérifie si un caractère est en minuscule ou majuscule
 * @l: Le caractère a vérifier
 * Return: 1 si c'est une majuscule, 0 sinon
 */
int _islower(int l)
{
	if (l >= 'a' && l <= 'z')
		return (1);
	else
		return (0);
}
