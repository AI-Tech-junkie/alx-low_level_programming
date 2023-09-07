#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - contact 2 string
 * @s1: size of array
 * @s2: charcter user whant
 * @n:number of char
 * Return: NULL if faill array if sucsess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int nn = n;
	char *ptr_return;
	int i = 0;
	int j = 0;
	int len_s2;
	int len_s1;

	len_s1 = strlen(s1);
	if (s2 == NULL)
		s2 = "";
	len_s2 = strlen(s2);
	if (nn <= len_s2)
	{
		len_s2 = nn;
	}
	ptr_return = malloc(sizeof(char) * (len_s2 + len_s1) + 1);
	if (ptr_return == NULL)
	{
		return (NULL);
	}
	strcpy(ptr_return, s1);
	for (i = len_s1; i < (len_s2 + len_s1); i++)
	{
		*(ptr_return + i) = s2[j];
		j++;
	}
	*(ptr_return + (len_s2 + len_s1)) = '\0';
	return (ptr_return);
}
