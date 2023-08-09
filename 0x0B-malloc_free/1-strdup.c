#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to diplucate
 * @str: String what to diplucate
 * Return: str_2 or NULL
*/
char *_strdup(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}
	char *str_2 = malloc(i);

	while (i >= 0)
	{
		*(str_2 + i) = *(str + i);
		i--;
	}
	return (str_2);
}
