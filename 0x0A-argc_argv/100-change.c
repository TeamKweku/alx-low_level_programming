#include <stdio.h>
#include <stdlib.h>

int change(int);
/**
  * main - prints minimum number of coins to make change
  * @argc: number of arguments passed
  * @argv: vector of pointers to strings passed
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int cents;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = change(cents);

	printf("%i\n", coins);


	return (0);
}
/**
  * change - takes change in cents
  * @cents: the amount passed
  *
  * Return: int (number of coins to give back)
  */
int change(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	return (coins);
}
