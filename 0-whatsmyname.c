#include <stdio.h>
/**
  * main - a program that prints its own name
  * @argc: the length of arguments passed to program
  * @argv: pointer to the array of strings passed to the program
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
