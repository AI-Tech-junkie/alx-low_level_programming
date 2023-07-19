#include "main.h"
/**
 * _abs - function to calculate absolut value of a number
 *
 *@n:type of parameter
 *
 * Return: Always x (success)
*/
int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
	} else
	{
		x = x;
	}
	return (x);
}
