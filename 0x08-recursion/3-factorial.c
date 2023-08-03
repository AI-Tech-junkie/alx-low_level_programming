#include "main.h"

/**
 * factorial - calculate factorial
 * @n: factorial number
 * Return: Always i
*/
int factorial(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	i = n * factorial(n - 1);
	return (i);
}
