#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - That initialize a variable of type struct dog
 * @d : the structure
 * @name : the name
 * @age : the age
 * @owner : the owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
