#include "main.h"
#include <stdio.h>

/**
 * print_array - Print string from array
 * @a: Input string to be print
 * @n: number of what to print
 * Return: Always void
 */
void print_array(int *a, int n)
{
	int i = 0;
	int j;

	while (*(a + i) != '\0')
	{
		i++;
	}
	for (j = 0; j <= n - 1; j++)
	{
		if (j == 0)
		{
			printf("%d,", *a)
				a++;
		}
		else if (j == (n - 1))
		{
			printf(" %d", *a);
			a++;
		}
		else
		{
			printf(" %d,", *a);
			a++;
		}
	}
}
