#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - fucntion to calculate facturial
 * @x: number for _pow_recursion
 * @y: pow
 * Return: the len i or -1 if negative
*/
int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	i = _pow_recursion(x, y - 1) * x;
	return (i);
}
