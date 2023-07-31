#include "main.h"
/**
 * _memset - function fills the first n bytes
 *@s: area pointed
 *@b: constant byte
 *@n: bytes of the memory
 * Return: Always s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
