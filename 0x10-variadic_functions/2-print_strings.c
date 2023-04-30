#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - function that prints strings
  * @separator: a character that separates the printed strings
  * @n: number of arguments to be passed
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list arg_list;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}

	printf("\n");

	va_end(arg_list);
}
