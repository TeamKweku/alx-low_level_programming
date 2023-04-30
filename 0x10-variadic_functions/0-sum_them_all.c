#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - function that returns the sum of all n arguments
  * to the variadic function
  * @n: specificied number of numbers function can take
  *
  * Return: sum of all ints passed to function
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum, value;

	va_list arg_list;

	if (n == 0)
		return (0);

	va_start(arg_list, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		value = va_arg(arg_list, int);
		sum += value;
	}
	va_end(arg_list);

	return (sum);
}

