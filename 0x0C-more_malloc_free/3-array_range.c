#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function to create an array of integers within a range
 * @min: min number
 * @max: max number
 * Return: pointer to the dynamically allocated array, or NULL if failed
*/
int *array_range(int min, int max)
{
	int *s3;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	s3 = malloc(sizeof(int) * size);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s3[i] = min + i;
	}
	return (s3);
}
