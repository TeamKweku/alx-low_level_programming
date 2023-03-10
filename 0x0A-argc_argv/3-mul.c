#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that multiplies two numbers
  * @argc: number of arguments passed
  * @argv: vector of pointers to strings passed
  *
  * Return: 0 (success) or -1 (error)
  */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);

		return (0);
	}
	printf("Error\n");
	return (1);
}
