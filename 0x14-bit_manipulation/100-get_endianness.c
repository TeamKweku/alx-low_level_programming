#include "main.h"
/**
  * get_endianness - function that gets endianness and returns
  * an int based on the int value result
  *
  * Return: int value (endianness)
  */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
