#include <stdio.h>
/**
 *main - Entery point 
 * Description:task 6
 * Return: 0 Always (success)
*/
int main(void)
{
	char c;
	int i;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %zu \n", sizeof(c));
	printf("Size of an int: %zu \n", sizeof(i));
	printf("Size of a long int: %zu \n", sizeof(li));
	printf("Size of a long long int: %zu \n", sizeof(lli));
	printf("Size of a float: %zu \n", sizeof(f));
	return (0);
}
