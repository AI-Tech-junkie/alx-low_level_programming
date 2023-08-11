#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function to allocate memory
 * @size: size of memory
 * @nmemb: array size
 * Return: allways s3 or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s3;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s3 = malloc(nmemb * size);
	if (s3 == NULL)
		return (NULL);
	return (s3);
}
