#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - like calloc function
 * @nmemb: size of array
 * @size: size of each elment
 * Return: NULL if faill array if sucsess
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_return;

	ptr_return = malloc(nmemb * sizeof(size));
	if (ptr_return == NULL)
	{
		return (NULL);
	}

	return (ptr_return);
}
