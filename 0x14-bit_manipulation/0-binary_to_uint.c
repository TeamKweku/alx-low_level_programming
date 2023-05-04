#include "main.h"
/**
  * binary_to_uint - function that convers a binary number
  * to an unsigned integer
  * @b: pointer to a string containing 0s and 1s
  *
  * Return: converted uint or 0 if error
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			n = 2 * n + (b[i] - '0');
		else
			return (0);
		i++;
	}

	return (n);
}
