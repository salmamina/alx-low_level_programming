#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - store a copy of name and owner
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's name
 * Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;
	int i, j, k;
	char *n, *o;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(doge);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(doge);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	doge->name = n;
	doge->owner = o;
	doge->age = age;

	return (doge);
}
