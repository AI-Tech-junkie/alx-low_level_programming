#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - prints buffer in hexa
 * @min: min number
 * @max: max number
 * Return: NULL or array.
 */
int *array_range(int min, int max)
{
	int *ptr_return;
	int *temp_ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr_return = malloc((max - min + 1) * sizeof(int));
	if (ptr_return == NULL)
	{
		return (NULL);
	}
	temp_ptr = ptr_return;
	for (int i = min; i <= max; i++)
	{
		*temp_ptr = i;
		temp_ptr++;
	}
	return (ptr_return);
}
