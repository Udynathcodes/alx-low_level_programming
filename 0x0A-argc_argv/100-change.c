#include <stdio.h>
#include <stdlib.h>
/**
  * main - print minimum number of coins
  * @argc: arg counts
  * @argv: arg
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int amount;
	int coins_of_values[] = {25, 10, 5, 2, 1};
	int coins_len = 5;
	int change_coins = 0;
	int current_coins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < coins_len; i++)
	{
		current_coins = amount / coins_of_values[i];
		change_coins += current_coins;
		amount -= current_coins * coins_of_values[i];
	}
	printf("%d\n", change_coins);
	return (0);
}
