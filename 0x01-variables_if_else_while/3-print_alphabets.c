#include <stdio.h>
/**
 * main - Entery point
 *
 * Description: second program
 *
 * Return: 0 (success)
*/
int main(void)
{
	char n, N;

	for (n = 'a'; n <= 'z'; n++)
	{
		 putchar(n);
	}
	for (N = 'A'; N <= 'Z'; N++)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
