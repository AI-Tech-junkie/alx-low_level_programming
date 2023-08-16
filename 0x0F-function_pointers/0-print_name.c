#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print
 * @name: name of bob
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
