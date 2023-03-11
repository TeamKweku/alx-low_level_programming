#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _is_digit(char *s);
/**
  * main - a program that adds positive numbers
  * @argc: number of arguments passed
  * @argv: vector of pointers to strings passed
  *
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int i, sum, digit;

	i = 1;
	while (i < argc)
	{
		if (_is_digit(argv[i]))
		{
			digit = atoi(argv[i]);
			sum += digit;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}

/**
  * _is_digit - compares values of string if its number
  * @s: array of string
  *
  * Return: 0 (success)
  */
int _is_digit(char *s)
{
	int i, len;

	i = 0;
	len = strlen(s);
	while (i < len)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
