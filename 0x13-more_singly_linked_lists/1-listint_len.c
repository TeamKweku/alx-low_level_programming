#include <stdlib.h>
#include "lists.h"
/**
  * listint_len - function that returns the number of elements
  * in a linked listint_t list
  * @h: pointer to the head node of the listint_t
  *
  * Return: number of elements in listint_t list
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t n = 0;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}

	return (n);
}
