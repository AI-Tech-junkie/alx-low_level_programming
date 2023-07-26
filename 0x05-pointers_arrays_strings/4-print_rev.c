#include "main.h"
/**
 * print_rev - print strings in reverse
 *@s: sting input
 * Return: always void
*/
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
