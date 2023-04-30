#include "main.h"
/**
  * factorial - returns the factorial of a given n
  * @n: the int to find factorial
  *
  * Return: factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
