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
	char *str_2;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}
	i++;
	str_2 = malloc(i);
	if (str_2 == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		*(str_2 + i) = *(str + i);
		i--;
	}
	return (str_2);
}
