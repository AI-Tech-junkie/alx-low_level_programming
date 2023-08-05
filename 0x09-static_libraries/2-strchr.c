#include "main.h"
#include <stdio.h>
/**
 * _strchr - function fills the first n bytes
 *@s: area pointed
 *@c: searching char
 * Return: if c found return s else NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
