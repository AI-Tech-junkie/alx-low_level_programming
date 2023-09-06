#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - creat an array from arguments
 * @ac: size of array
 * @av: charcter user whant
 * Return: 0 or NULL if faill string if sucsess
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0;
	char *r_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}
	r_string = (char *)malloc(total_length + ac + 1);
	if (r_string == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(r_string + j, av[i]);
		j = j + strlen(av[i]);
		r_string[j] = '\n';
		j++;
	}
	r_string[j] = '\0';
	return (r_string);
}
