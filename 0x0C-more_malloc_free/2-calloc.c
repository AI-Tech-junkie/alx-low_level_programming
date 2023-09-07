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
	int *ptr_return;
	int i = 0;
	int n = nmemb;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr_return = malloc(nmemb * sizeof(size));
	if (ptr_return == NULL)
	{
		return (NULL);
	}
	while (i <  n)
	{	
		ptr_return[i] = 0;
		i++;
	}
	return (ptr_return);
}
