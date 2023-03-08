#include "main.h"
/**
  * factorial - returns the factorial of n
  * @n: the int to find factorial
  *
  * Returns: int value of factorial
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
		return n * factorial(n - 1);
}
