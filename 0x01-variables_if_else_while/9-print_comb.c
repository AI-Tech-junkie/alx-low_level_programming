#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: task 9
 *
 * Return: Always 0 (success
 *
*/
int main(void)
{
	int N;

	for (N = '0'; N <= '9'; N++)
	{
		putchar(N);
		if (N != '9')
		{
			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');
	return (0);


}
