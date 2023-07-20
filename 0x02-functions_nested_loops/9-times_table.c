#include "main.h"
/**
 * times_table - print times_table
 *
 * Return: void
 *
*/
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		_putchar('\n');
		for (j = 0; j <= 9; j++)
		{
			_putchar(' ');
			r = i * j;
			if (r >= 10)
			{
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			} else 
				_putchar('0' + r);
			if (j != 9)
				_putchar(',');
			else
				_putchar('$');
		}
		_putchar('\n');
	}
}
