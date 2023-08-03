#include "main.h"

/**
 * _pow_recursion - calculate power
 * @x:number
 * @y:power number
 * Return: Always i
*/
int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	i = x * _pow_recursion(x, y - 1);
	return (i);
}
