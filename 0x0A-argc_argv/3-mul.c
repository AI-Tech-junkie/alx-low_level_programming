#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc:number of arguments
 * @argv:strings of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
