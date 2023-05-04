#include "main.h"
/**
  * clear_bit - function that sets the value of a bit
  * to 0 at a given index
  * @n: pointer to value in memory
  * @index: index to set bit
  *
  * Return: 1 (success) or -1 (failure)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
