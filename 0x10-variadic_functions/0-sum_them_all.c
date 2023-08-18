#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of numbers
 * @n: how many numbers
 * Return: if n = 0 return 0 else allways sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;

	if (n == 0)
		return (0);
	va_list list_of_numbers;

	va_start(list_of_numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list_of_numbers, int);
	}
	va_end(list_of_numbers);
	return (sum);
}
