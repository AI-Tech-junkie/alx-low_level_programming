#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - fucntion to calculate the len
 * @s: string to print
 * Return: the len i
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i = _strlen_recursion(s + 1) + 1;
	return (i);
}
