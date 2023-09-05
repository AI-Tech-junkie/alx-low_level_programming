#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creat an array
 * @size: size of array
 * @c: charcter user whant
 * Return: 0 if faill array if sucsess
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *array;

	array = malloc(size * sizeof(char));
	if (array == NULL || size == 0)
	{
		free(array);
		return (0);
	}
	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}
