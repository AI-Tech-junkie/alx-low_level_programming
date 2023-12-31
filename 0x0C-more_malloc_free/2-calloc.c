#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _just_a_test - like calloc function
 * @array: size of array
 * @size: size of each elment
 * @c: charcter
 * Return: none
 */
void _just_a_test(char *array, char c, int size)
{
	int i = 0;

	while (i < size)
	{
		array[i] = c;
		i++;
	}
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
	_just_a_test(ptr_return, 0, nmemb * sizeof(size));

	return (ptr_return);
}
