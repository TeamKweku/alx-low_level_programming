#include "main.h"
/**
  * get_bit - a function that returns the value of a bit
  * at a given index
  * @n: the value to check for index
  * @index: index of the bit to be accessed
  *
  * Return: value of bit at index or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift;
	int bit;

	if (index > 63)
		return (-1);
	shift = 1 << index;
	bit = (n & shift) ? 1 : 0;

	return (bit);
}
