#include "main.h"

/**
 * help_function - function to help
 * @n:number
 * @j:counter
 * Return: i or j
*/

int help_function(int n, int j)
{
	int i;

	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	i = help_function(n, j + 1);
	return (i);
}

/**
 * _sqrt_recursion - function to calculate squar
 * @n:number
 * Return: Allways i
*/

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	i = help_function(n, 0);
	return (i);
}

