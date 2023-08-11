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
	int i;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
	{}
	s3 = malloc(sizeof(int) * i);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	for (min; min <= max; min++)
	{
		s3[i] = min;
		i++;
	}
	return (s3);
}
