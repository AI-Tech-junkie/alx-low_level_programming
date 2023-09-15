#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers function
 * @n:number parmeter
 * @separator: char separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    int i;
    int N = n;
    va_list list;

    va_start(list, n);
    for (i = 0; i < N; i++)
    {
        printf("%d", va_arg(list, int));
        if (separator != NULL)
            printf("%s",separator);
    }
    va_end(list);
}