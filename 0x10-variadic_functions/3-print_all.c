#include <stdarg.h>
#include <stdio.h>
/**
  * print_all - prints anything provided to the function
  * @format: list of types of argument passed to the function
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";
	va_list arg_list;

	va_start(arg_list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg_list, double));
					break;
				case 's':
					str = va_arg(arg_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");

	va_end(arg_list);
}
