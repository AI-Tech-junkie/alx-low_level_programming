#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses integer array
 * @a: Pointer to the integer array
 * @n: Number in the array
*/
void reverse_array(int *a, int n)
{
	int i, r;

	for (r = 0; r < n / 2; r++)
	{
		i = *(a + r);
		*(a + r) = *(a + n - r - 1);
		*(a + n - r - 1) = i;
	}
}
