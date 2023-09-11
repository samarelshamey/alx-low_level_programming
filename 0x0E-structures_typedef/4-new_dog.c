#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * Return: struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		return (NULL);
	}
	dog1->name = malloc((strlen(name) + 1) * sizeof(char));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	strcpy(dog1->name, name);

	dog1->age = age;

	dog1->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	strcpy(dog1->owner, owner);
	return (dog1);
}
