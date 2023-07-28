#include "main.h"
#include <stdio.h>

/**
 * string_toupper - lower case to upper
 * @up: text u whant upper
 * Return: Always up
*/
char *string_toupper(char *up)
{
	int int_up;
	int i = 0;

	while (*(up + i) != '\0')
	{
		int_up = *(up + i);
		if (int_up >= 97 && int_up <= 122)
		{
			int_up = int_up - 97 + 65;
			*(up + i) = int_up;
		}
		i++;
	}
	return (up);
}
