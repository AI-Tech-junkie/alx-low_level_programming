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
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
