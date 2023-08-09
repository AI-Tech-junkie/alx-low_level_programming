#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function to creat array
 * @size: size of array
 * @c: charcter to put
 * Return: the pointer to the array or NULL
*/
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
	{
		return (0);
	} else
	for (i = 0; i < size; i++)
	{
			*(ptr + i) = c;
	}
	return (ptr);
}
