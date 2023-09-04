#include <stdio.h>
#include <stdlib.h>
/**
 * hand_made_function -  function to help
 * @i: amount of money
 * Return: allway return the amount_of_cents
*/
int hand_made_function(int j)
{
	int amount_of_money = j;
	int amount_of_cents = 0;
	int i = 0;
	int cents[] = {25, 10, 5, 2, 1};

	while (amount_of_money >= 0)
	{
		for (i = 0; i <= 4; i++)
		{
			while (amount_of_money - cents[i] >= 0)
			{
				if (amount_of_money - cents[i] == 0)
				{
					amount_of_cents++;
					return (amount_of_cents);
				}
				amount_of_money = amount_of_money - cents[i];
				amount_of_cents++;
			}
		}
	}
	return (0);
}

/**
 * main - main function
 * @argc: amount of money
 * @argv: string before convert
 * Return: if argc != 2 return 1 else 0
*/
int main(int argc, char *argv[])
{
	int amount_of_cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount_of_cents = hand_made_function(atoi(argv[1]));
	printf("%d\n", amount_of_cents);
	return (0);
}
