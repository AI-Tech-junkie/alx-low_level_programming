#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy to first pointer
 * @dest: copy here
 * @src: what to copy
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
