#include <stdio.h>

/**
 * main - check the code
 * @argv: argment value
 * @argc: argment counter
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}