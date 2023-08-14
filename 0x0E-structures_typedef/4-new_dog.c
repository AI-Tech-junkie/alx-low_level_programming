#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - add new dog
 * @name : name of the dog
 * @age :age of the dog
 * @owner:owner of the dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *New_dog;
New_dog = malloc(sizeof(dog_t));
if (New_dog == NULL)
return (NULL);
New_dog->name = name;
New_dog->age = age;
New_dog->owner = owner;
return (New_dog);
}
