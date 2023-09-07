#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - allocated memory with malloc
 * @b: size of array
 * Return: pointer if it sucessed if faill exit
*/
void *malloc_checked(unsigned int b)
{
	void *ptr_b;

	ptr_b = malloc(b);
	if (ptr_b == NULL)
	{
		exit(98);
	}
	return (ptr_b);
}



