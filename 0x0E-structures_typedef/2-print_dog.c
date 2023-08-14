#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print structs
 * @d: pointer to prints
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s \n", d->name);
	if (d->age != 0)
		printf("Age: %f \n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s \n", d->owner);
}
