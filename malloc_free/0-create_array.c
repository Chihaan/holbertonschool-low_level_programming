#include <stdlib.h>
/**
 * create_array - crée un tableau de caractères et l'initialise
 * @size: taille du tableau
 * @c: caractère utilisé pour initialiser le tableau
 *
 * Return: pointeur vers le tableau, ou NULL si erreur ou taille nulle
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tab = malloc(size * sizeof(*tab));

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = c;

	return (tab);
}
