#include "main.h"
/**
 * print_line - print line
 *@x: how many time print line
 * Return: Always void
*/
void print_line(int x)
{
	int i;

	if (x <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i <= x; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
