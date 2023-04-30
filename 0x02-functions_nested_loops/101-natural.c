#include <stdio.h>
/**
  * main - functions adds the natural numbers of n
  *
  * Return: 0 (success)
  */
int main(void)
{
	int n;
	int i;
	int sum;

	i = 0;
	n = 1024;
	while (i < n)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
