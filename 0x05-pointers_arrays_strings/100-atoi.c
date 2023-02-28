#include "main.h"
/**
  * _atoi - function that converts a string to an integer
  * @s: the string value
  *
  * Return: converted value
  */
int _atoi(char *s)
{
	int i;
	unsigned int n;
	int min;
	int m;

	i = 0;
	n = 0;
	min = 1;
	m = 0;
	while (s[i])
	{
		if (s[i] == '-')
		{
			min *= -1;
		}

		while (s[i] >= '0' && s[i] <= '9')
		{
			m = 1;
			n = (n * 10) + (s[i] - '0');
			i++;
		}
		if (m == 1)
		{
			break;
		}
		i++;
	}
	n *= min;
	return (n);
}

