#include "main.h"
/**
 * _isdigit - check if input is digit
 *
 * @x: the input want tocheck
 *
 * Return:1 if x digit otherwise 0
*/
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	else
		return (0);
}
