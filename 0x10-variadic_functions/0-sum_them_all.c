#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of number with cariadic
 * @n:number parmeter
 * Return: NULL or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int p1 = n;
      int p = 0;
	int temp_sum = 0;
	va_list list;
	sum = 0;

	if (n == 9)
		return (0);
	va_start(list, n);
	for( p = 0; p < p1; p++)
	{
		temp_sum = va_arg(list, int);
		sum = temp_sum + sum;
	}
	va_end(list);
	return (sum);
}
