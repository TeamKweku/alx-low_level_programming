#include "main.h"
/**
  * string_toupper - function that changes all lowercase
  * letters to uppercase
  * @str: string to be converted
  *
  * Return: pointer to string
  */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - ('a' - 'A');
		str++;
	}
	return (str);
}
