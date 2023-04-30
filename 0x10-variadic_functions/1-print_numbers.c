#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - function that prints numbers, seperated by
  * a seperator and followed by a newline
  * @separator: the char value separator between printed numbers
  * @n: number of argument of function
  *
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;
	va_list arg_list;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(arg_list, int);
		printf("%d", value);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg_list);
}
