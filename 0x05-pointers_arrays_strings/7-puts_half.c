#include "main.h"

/**
 * puts_half - Print second half of the string
 * @s: Input string to be print
 * Return: Always void
*/

void puts_half(char *s)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		for (j = (i / 2); j <= i; j++)
		{
			_putchar(*(s + j));
		}
	}
	if ((i % 2) != 0)
	{
		for (j = (i - 1) / 2; j < i; j++)
		{
			_putchar(*(s + j));
		}
	}
	_putchar('\n');
}
