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
			if ( i == 98)
			{
				printf("%i", i);
				printf("\n");
				break;
			}
			else 
				printf("%i, ", i);
		}
		printf("\n");
	} else
	{
		for (i = x; i >= 98; i--)
		{
			
			if ( i == 98)
			{
				printf("%i", i);
				printf("\n");
				break;
			}
			else
				printf("%i, ", i);
		}
	}
}
