#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_if_digital - check the code if digital
 * @argc: string
 * Return: Always 0 or 1 if it notworking
 */
int check_if_digital(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		if (*(c + i) > '9' || *(c + i) < '0')
			return (0); /* if it not */
		else
			return (1);
		i++;
	}
	return (2);

}
/**
 * main - check the code
 * @argc:number of arguments
 * @argv:strings of arguments
 * Return: Always 0 or 1 if it notworking
*/
int main(int argc, char *argv[])
{
	int i = 0, j = 0, sum = 0, t = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (t = 1; t < argc; t++)
	{
		c = argv[t];
		j = atoi(argv[t]);
		i = check_if_digital(c);
		if (i != 0 && j > 0)
		{
			sum = j + sum;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
