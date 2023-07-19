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
		x = x * -1;
	}
	x = x % 10;
	_putchar('0' + x);
	return (x);
}
