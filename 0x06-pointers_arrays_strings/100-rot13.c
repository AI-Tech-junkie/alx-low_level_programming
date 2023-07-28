#include "main.h"
#include <stdio.h>

/**
 * rot13 - encryption whith rot13
 * @rot: input string
 * Return: Always rot
 */
char *rot13(char *rot)
{
	int i;
	int j;
	char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(rot + i) != '\0'; i++)
	{
		for (j = 0; alpha1[j] != '\0'; j++)
		{
			if (rot[i] == alpha1[j])
			{
				rot[i] = alpha2[j];
				break;
			}
		}
	}
	return (rot);
}
