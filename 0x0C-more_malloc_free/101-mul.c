#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int _is_digit(char *s);

/**
  * main - calculates multiple of two numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0 (success)
  */
int main(int argc, char **argv)
{
	long product, num1, num2;
	char *p;

	if (argc == 3)
	{
		if (_is_digit(argv[1]) && _is_digit(argv[2]))
		{
			num1 = strtol(argv[1], &p, 10);
			num2 = strtol(argv[2], &p, 10);
			product = num1 * num2;
			printf("%ld\n", product);
		}

		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
/**
  * _is_digit - compares values of string if its number
  * @s: array of string
  *
  * Return: 0 (success) else 1
  */
int _is_digit(char *s)
{
	int i, len;

	i = 0;
	len = strlen(s);
	while (i < len)
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
