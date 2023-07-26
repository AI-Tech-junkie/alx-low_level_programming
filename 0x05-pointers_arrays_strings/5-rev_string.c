#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: Input string to be reversed
 * Return: Always void
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char t;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		t = *(s + j);
		*(s + j) = *(s - j - 1 + i);
		*(s - j - 1 + i) = t;
	}
	_putchar('\n');
}
