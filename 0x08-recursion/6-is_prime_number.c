#include <stdio.h>
#include "main.h"
/**
 * check_if - check if it prime or no
 * @n: number from first function
 * @s: current guess for prime
 * Return: return 1 if prime if not 0
*/
int check_if(int n, int s)
{
	if (s >= n)
		return (1);
	if (n % s == 0)
		return (0);
	return (check_if(n, s + 1));
}
/**
 * is_prime_number - function for outputs
 * @n: number from first function
 * Return: if 1 prrime 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (check_if(n, 2));
}
