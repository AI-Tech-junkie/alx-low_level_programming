#include "main.h"
/**
 * more_numbers - print number without 2-4
 *
 * Return: Always void
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
