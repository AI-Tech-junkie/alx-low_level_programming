#include "main.h"
/**
 * _memcpy - function copy n bytes
 *@src: area pointed to copy
 *@n: constant byte
 *@dest: destination memory
 * Return: Always dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
