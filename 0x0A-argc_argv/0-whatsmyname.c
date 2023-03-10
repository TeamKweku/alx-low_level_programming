#include <stdio.h>
/**
  * main - program that prints its name
  * @argc: the counter of commandline arguments
  * @argv: vector of pointer to strings
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
