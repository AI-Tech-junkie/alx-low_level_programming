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
		if(i > 0 && i < 9)
		{
			_putchar('\n');
		}
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + r);
			}
			if (r >= 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			if (j != 9)
			{
				_putchar(',';
			}
		}
	}
}
