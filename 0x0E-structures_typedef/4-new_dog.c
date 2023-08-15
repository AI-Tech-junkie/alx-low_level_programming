#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * *new_dog - add new dog
 * @name : name of the dog
 * @age :age of the dog
 * @owner:owner of the dog
 * Return: return n_dog or NULL by conditions
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(sizeof(name) + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		return (NULL);
	}
	strcpy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = malloc(sizeof(age) + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	strcpy(n_dog->owner, owner);
	return (n_dog);
}
