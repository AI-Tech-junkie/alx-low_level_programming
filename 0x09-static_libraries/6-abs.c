#include "main.h"
/**
 * _abs - function to calculate absolut value of a number
 *
 *@x:parameter and return value
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
