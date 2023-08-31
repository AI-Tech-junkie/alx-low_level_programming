#include <stdio.h>
#include "main.h"
/**
 * _sqrt - find _sqrt
 * @n: number from frist function
 * @s: allways 1
 * Return: the len s or -1 if negative
*/
int _sqrt(int n, int s)
{
	if (s * s == n)
		return (s);
	if (s > n / 2)
		return (-1);
	_sqrt(n, s + 1);
}
/**
 * _sqrt_recursion - function for out puts
 * @n: number from frist function
 * Return: the i or -1 if negative
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n <= 0)
		return (-1);
	i = _sqrt(n, 1);
	return (i);
}
