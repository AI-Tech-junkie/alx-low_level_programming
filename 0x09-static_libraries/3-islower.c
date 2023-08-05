#include "main.h"
/**
 * _islower - check if a character is lowercase
 *
 *@x: to check the input
 *
 *Return: returns 1 if 'x' lowercase Otherwise Always 0 (success)
 *
*/
int _islower(int x)
{

	if (x >= 97 && x <= 122)
	{
		return (1);
	}
	return (0);
}
