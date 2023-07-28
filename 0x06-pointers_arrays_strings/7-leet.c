#include "main.h"
#include <stdio.h>

/**
 * leet - change litters to numbers
 * @t: text
 * Return: t Always
*/
char *leet(char *t)
{
	int i;
	int j;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; *(t + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (t[i] == a1[j])
			{
				t[i] = a2[j];
			}
		}
	}
	return (t);
}
