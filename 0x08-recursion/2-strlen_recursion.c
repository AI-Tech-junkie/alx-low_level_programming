#include "main.h"

/**
 * _strlen_recursion - calculate string lenght recursion
 * @s: Input string to be print
 * Return: Always i
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	i = _strlen_recursion(s + 1) + 1;
	return (i);
}
