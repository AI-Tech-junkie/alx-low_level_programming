#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print of numbers
 * @n: how many numbers
 * @separator: separator symbol
 * Return: allways void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_of_numbers;

	va_start(list_of_numbers, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list_of_numbers, int));
		}
	} else
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0 && i <= n - 1)
				printf("%s", separator);
			printf("%d", va_arg(list_of_numbers, int));
		}
	}
	printf("\n");
	va_end(list_of_numbers);
}
