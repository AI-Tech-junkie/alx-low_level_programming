#include "main.h"
/**
 * _isalpha - check if a character is lowercase
 *
 *@x:check input function
 *
 *Return: returns 1 if 'x' lowercase Otherwise Always 0 (success)
 *
*/
int _isalpha(int x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		return (1);
	}
	return (0);
}
