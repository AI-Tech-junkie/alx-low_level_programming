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
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
