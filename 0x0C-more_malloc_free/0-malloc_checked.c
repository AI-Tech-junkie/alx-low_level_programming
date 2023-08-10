#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function to mallocchecked
 * @b: size
 * Return: i
*/
void *malloc_checked(unsigned int b)
{
	int *i;

	i = (int *)malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
