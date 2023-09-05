#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function _strdup
 * @str: tring u give
 * Return: 0 if faill string if sucsess
 */
char *_strdup(char *str)
{
	char *new_string;

	new_string = malloc(strlen(str) * sizeof(char));
	if (new_string == NULL || str == NULL)
	{
		free(new_string);
		return (NULL);
	}
	strcpy(new_string, str);
	return (new_string);
}
