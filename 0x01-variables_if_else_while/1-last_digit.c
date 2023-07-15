#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entery point
 *
 * Description: second program
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n,d;

	srand(tiime(0));
	n = rand() - RAND_MAX / 2;
	d = n %10
	if (n > 5)
	{
		printf("%d and is greater than 5\n", d);
	} else if (n == 0)
	{
		printf("%d and is 0\n", d);
	} else if (n < 6 && !0)
	{
		printf("%d and is less than 6 and not 0\n", d);
	}
	return (0);
}
