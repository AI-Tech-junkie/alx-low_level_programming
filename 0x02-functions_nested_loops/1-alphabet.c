#include "main.h"
/**
 * print_alphabet - Entry point
 *
 *Description:task1
 *
 *Return: 0 Always (success)
*/
void print_alphabet(void)
{
	int i;
	int j = '\n';

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar(j);

}
