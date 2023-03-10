#include <stdio.h>
/**
  * main - a program that prints the number of arguments passed
  * @argc: number of arguments passed
  * @argv: vector of pointers to strings passed
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
