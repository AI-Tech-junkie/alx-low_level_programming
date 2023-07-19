#include "main.h"
/**
 * print_last_digit - print last number
 * @x:parameter
 * Return: Always t
*/
int print_last_digit(int x)
{
	if (x < 0)
	{
		if (x == -2147483648)
		{
			x = 8;
			return (x);
		}
		x = x * -1;
	}
	x = x % 10;
	_putchar('0' + x);
	return (x);
}
