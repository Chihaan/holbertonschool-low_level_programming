#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a : la valeur que nous traitons
 * Return: -a pour rendre positif le négatif sinon a pour laisse tel quel
 */
int _abs(int a)
{	
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
