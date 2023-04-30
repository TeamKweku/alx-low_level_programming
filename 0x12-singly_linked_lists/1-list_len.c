#include <stdlib.h>
#include "lists.h"
/**
  * list_len - function that returns the number of elements
  * in a linked list_h list
  * @h: provided linked list
  *
  * Return: number of elements in list_t
  */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t n = 0;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}

	return (n);
}
