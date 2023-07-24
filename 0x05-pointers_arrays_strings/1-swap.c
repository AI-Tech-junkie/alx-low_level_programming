#include "main.h"
/**
 * swap_int - update n to value c and c to n
 * @n:parameter1
 * @c:parameter2
 * Return: Always void.
*/
void swap_int(int *n, int *c)
{
	int a, b;

	a = *n;
	b = *c;
	*n = b;
	*c = a;
}
