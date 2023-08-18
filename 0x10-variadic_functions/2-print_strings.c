#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @n: how many strings
 * @separator: separator symbol
 * Return: allways void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_of_numbers;
	char *ptr;

	va_start(list_of_numbers, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			ptr = va_arg(list_of_numbers, char *);
			if (ptr == NULL)
				printf("(nil)");
			else
				printf("%s", ptr);
		}
	} else
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0 && i <= n - 1)
				printf("%s", separator);
			ptr = va_arg(list_of_numbers, char *);
			if (ptr == NULL)
				printf("(nil)");
			else
				printf("%s", ptr);
		}
	}
	printf("\n");
	va_end(list_of_numbers);
}
