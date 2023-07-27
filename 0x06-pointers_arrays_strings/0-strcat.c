#include "main.h"
#include <stdio.h>

/**
 * _strcat - copy and second string to first
 * @dest: 1 string
 * @src: 2 string
 * Return: Always void
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int r;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (r = i; r <= i + j; r++)
	{
		if (r == i + j)
		{
			dest[r] = '\0';
		}
		dest[r] = src[r - i];
	}
	return (dest);
}

