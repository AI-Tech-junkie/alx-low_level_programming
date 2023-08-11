#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function to print range
 *@min: min nuber
 *@max: max number
 * Return: allways s3 or NULL
*/
int *array_range(int min, int max)
{
	int *s3;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	s3 = malloc(sizeof(int) * j);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		s3[i] = min + i;
	}
	return (s3);
}
