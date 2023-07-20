#include "main.h"
/**
 * _isupper - to check if a char is upper
 *
 *@c: the char want to check
 *
 *Return: 1 if c upper otherwise 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
