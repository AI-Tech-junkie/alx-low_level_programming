#include "main.h"
/**
 * puts2 - print every 2 char for 0
 *@s:string text
 * Return: Always void
*/
void puts2(char *s)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
