#include "main.h"

/**
 * print_triangle - print triangle of square
 *@size: size of it
 * Return: Always void
*/
void print_triangle(int size)
{
	int i, j, d;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - i ; j > 1 ; j--)
		{
			_putchar(' ');
		}
		for (d = 0; d <= i; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
