#include <stdio.h>
/**
  * main - program that prints all agrguments
  * @argc: numbers of arguments passed
  * @argv: vector of pointers to strings passed
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
