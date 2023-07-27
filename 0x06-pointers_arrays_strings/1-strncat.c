#include "main.h"
/**
 * _strncat - Print string from array
 * @dest: Input string to be print
 * @src: what add
 * @n: number of what to print
 * Return: Always (dest)
*/
char *_strncat(char *dest, char *src, int n)
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
	if (n >= j)
	{
		n = j;
	}
	for (r = i; r <= i + n - 1; r++)
	{
		if (r == i + j)
		{
			dest[r] = '\0';
		}
		dest[r] = src[r - i];
	}
	return (dest);
}
