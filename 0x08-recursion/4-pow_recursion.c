#include "main.h"
/**
  * _pow_recursion - returns the value x raised to power y
  * @x: integer value to get power
  * @y: value for power of int
  *
  * Return: power y of x
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
