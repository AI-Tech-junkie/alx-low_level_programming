#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 *Description:task2
 *
 *Return: 0 Always (success)
*/
void print_alphabet_x10(void)
{
	int i, x;
	int j = '\n';

	for (x = 1 ; x <= 10 ; x++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar(j);

	}

}
