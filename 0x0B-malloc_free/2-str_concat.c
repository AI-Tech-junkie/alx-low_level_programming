#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to concatenated string (or NULL on failure)
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, t, p;
	char *s3;

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s3 = (char *) malloc(len1 + len2 + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (t = 0; t < len1; t++)
	{
		s3[t] = s1[t];
	}
	for (p = 0; p < len2; p++, t++)
	{
		s3[t] = s2[p];
	}
	s3[t] = '\0';
	return (s3);


}
