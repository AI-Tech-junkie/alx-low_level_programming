#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print from input to 98
 *@x: the input number
 *return: void
*/
void print_to_98(int x)
{
	int i;

	if (x < 98)
	{
		for (i = x; i <= 98; i++)
		{
			if (i == x)
			{
				printf("%i,", i);
			} else
				printf(" %i,", i);
		}
	} else if (x >= 98)
	{
		for (i = x; i >= 98; i--)
		{
			if (i == x)
			{
				printf("%i,", i);
			} else
				printf(" %i,", i);
		}
	}
}
