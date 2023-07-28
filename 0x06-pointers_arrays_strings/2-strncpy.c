#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Print string from array
 * @dest: Input string to be print
 * @src: what add
 * @n: number of what to print
 * Return: Always (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int r;

	while (src[j] != '\0')
	{
		j++;
	}
	for (r = 0; r < n ; r++)
	{
		dest[r] = src[r];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
