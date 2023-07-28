#include "main.h"
#include <stdio.h>

/**
 * cap_string - convert lowercase characters to uppercase after separators
 * @text: input string
 * Return: Always text
 */
char *cap_string(char *text)
{
	int i = 0, j = 0;
	int sep[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (text[j] != '\0')
	{
		for (i = 0; i <= 13; i++)
		{
			if (text[j] == sep[i])
			{
				if (text[j + 1] >= 'a' && text[j + 1] <= 'z')
				{
					text[j + 1] = text[j + 1] - 97 + 65;
				}
			}
		}
		j++;
	}
	return (text);
}
