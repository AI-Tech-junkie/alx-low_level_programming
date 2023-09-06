#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - creat an array
 * @width: width of array
 * @height: height of array
 * Return: 0 if faill array if sucsess
 */

int **alloc_grid(int width, int height)
{
	int **tow_demo_array;
	int i = 0;
	int j = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	tow_demo_array = malloc(sizeof(int *) * width);
	if (tow_demo_array == NULL)
	{
		free(tow_demo_array);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		tow_demo_array[i] = malloc(sizeof(int) * width);
		if (tow_demo_array[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(tow_demo_array[j]);
			free(tow_demo_array);
			return (NULL);
		}
	}
	return (tow_demo_array);
}
