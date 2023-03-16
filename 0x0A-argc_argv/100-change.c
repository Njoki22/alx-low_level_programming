#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: if number of arguments is not exactly one -1
 * otherwise 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int num_coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};

	for (size_t i = 0; i < sizeof(coin_values) / sizeof(coin_values[0]); i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			num_coins++;
		}
	}
	printf("%d\n", num_coins);

	return (0);
}
