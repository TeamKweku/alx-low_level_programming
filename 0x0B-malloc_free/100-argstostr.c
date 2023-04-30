#include "main.h"
#include <stdlib.h>
/**
  * argstostr - function that concatenates all args of prgrm
  * @ac: arguments count to prgm
  * @av: pointer to array of num of arguments passed prgrm
  *
  * Return: pointer to new string
  */
char *argstostr(int ac, char **av)
{
	int i = 1, j = 0, k = 0, sum_all_len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			sum_all_len++;
			j++;
		}
		j = 0;
		i++;
	}

	str = malloc(sizeof(char) * (sum_all_len + ac));

	if (str == NULL)
		return (NULL);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}

		str[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';

	return (str);
}
