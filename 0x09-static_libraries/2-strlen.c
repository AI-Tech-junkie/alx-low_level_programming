#include "main.h"

/**
 * _strlen - count number of characters
 * @s:parameter1
 * Return: Always c.
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
