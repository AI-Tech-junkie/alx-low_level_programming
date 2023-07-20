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

	for (i = x; i <= 98; i++)
	{
		printf(" %i,", i);
	}

}
