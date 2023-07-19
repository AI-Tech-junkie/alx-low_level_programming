#include "main.h"
/**
 * print_sign - function to print the sign of number
 *
 * @n:the input value
 *
 * Return: if n>0 return 1, if n<0 return -1, if n=0 return 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

