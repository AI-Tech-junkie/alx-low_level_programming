#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to mallocchecked
 * @n: size
 * @s1: string 1
 * @s2:string 2
 * Return: allways s3
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i = 0;
	int j = 0;
	int a;
	int s;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s3 = malloc(i + j);
	if (s3 == NULL)
		return (NULL);
	for (s = 0; s < i; s++)
		s3[s] = s1[s];
	if (n >= j)
	{
		for (a = 0; a < j; a++, s++)
			s3[s] = s2[a];
	} else
	{
		for (a = 0; a < n; a++, s++)
		{
			s3[s] = s2[a];
		}
	}
	return (s3);
}
