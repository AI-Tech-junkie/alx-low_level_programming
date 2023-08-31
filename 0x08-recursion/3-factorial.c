#include <stdio.h>
#include "main.h"
/**
 * factorial - fucntion to calculate facturial
 * @n: number for facturial
 * Return: the len i or -1 if negative
*/
int factorial(int n)
{
	int i = 0;

	if (n == 0)
	{
		return (-1);
	} else if (n < 0)
	{
		return (-1);
	}
	i = factorial(n - 1) * n;
	return (i);
}

