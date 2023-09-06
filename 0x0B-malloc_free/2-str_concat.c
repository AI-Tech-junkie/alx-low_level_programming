#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - creat an array
 * @s1: size of array
 * @s2: charcter user whant
 * Return: 0 if faill array if sucsess
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *conact_string;
	int len_of_s1;
	int len_of_s2;

	if (s1 == NULL)
		*s1 = "";
	if (s2 == NULL)
		*s2 = "";
	len_of_s1 = strlen(s1);
	len_of_s2 = strlen(s2);
	conact_string = (char *)malloc(len_of_s2 + len_of_s1 + 1);
	if (conact_string == NULL)
	{
		free(conact_string);
		return (NULL);
	}
	for (i = 0; i < len_of_s1; i++)
	{
		*(conact_string + i) = s1[i];
	}
	for (i = len_of_s1; i <= len_of_s1 + len_of_s2; i++)
	{
		*(conact_string + i) = *s2;
		s2++;
	}
	conact_string[i] = '\0';
	return (conact_string);
}
