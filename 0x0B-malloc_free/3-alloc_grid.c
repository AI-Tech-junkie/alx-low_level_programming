#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to create an array of pointers
 * @width: width number
 * @height: height number
 * Return: pointer to the dynamically allocated array, or NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int **s3;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	s3 = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		s3[i] = malloc(height * sizeof(int *));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s3);
}
