#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _just_a_test - like calloc function
 * @array: size of array
 * @size: size of each elment
 * @ziro: char 0
 * Return: none
 */
char *_just_a_test(char *array, char ziro, int size)
{
	int i = 0;
	char *ptr;

	ptr = array;
	while (i < size)
	{
		ptr[i] = ziro;
		i++;
	}
	return (ptr);
}

/**
 * _calloc - like calloc function
 * @nmemb: size of array
 * @size: size of each elment
 * Return: NULL if faill array if sucsess
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_return;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr_return = malloc(nmemb * sizeof(size));
	if (ptr_return == NULL)
	{
		return (NULL);
	}
	_just_a_test(ptr_return, 0, nmemb);
	return (ptr_return);
}
