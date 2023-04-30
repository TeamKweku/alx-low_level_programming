#include "3-calc.h"
#include <string.h>
/**
  * get_op_func - function that selects that correct function
  * to perform the operation asked by user
  * @s: operator passed as argument
  *
  * Return: an int value from used function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].s != NULL && (strcmp(ops[i].s, s) != 0))
		i++;

	return (ops[i].function);
}
