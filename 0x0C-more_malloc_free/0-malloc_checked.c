#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory using malloc
  * @b: unsigned int of size for memory allocation
  *
  * Return: returns pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
