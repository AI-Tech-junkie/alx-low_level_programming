#include "main.h"
/**
 * _islower - check if a character is lowercase
 *
 *Description: this function will test if 'x' is lowercase or not
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
