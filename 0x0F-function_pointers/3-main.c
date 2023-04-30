#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - program takes commandline arguments and return
  * the expected result  on stdout
  * @argc: argument count passed to main
  * @argv: element of various argument passed to main
  *
  * Return: 0 (success)
  */
int main(int argc, char **argv)
{
	int num1, num2, solution;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) ||
		(*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	solution = get_op_func(operator)(num1, num2);

	printf("%d\n", solution);

	return (0);
}
