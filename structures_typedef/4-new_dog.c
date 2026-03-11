#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * len - Count the length of a string
 * @str : The string we wanna know the length
 * Return: Count
 */
int len(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}
/**
 * *new_dog - Creates a new dog
 * @name : The name of the dog
 * @age : The age
 * @owner : The owner
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(len(name) + 1);
	if (d->name == NULL)
		return (NULL);
	d->owner = malloc(len(owner) + 1);
	if (d->owner == NULL)
		return (NULL);
	for (i = 0; i < len(name); i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (j = 0; j < len(owner); j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
