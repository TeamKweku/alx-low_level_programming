#include "lists.h"
/**
  * dlistint_len - function that returns the number of
  * elmeents in a dlistint_t list
  * @h: pointer to the head node
  *
  * Return: number of nodes in the dlistint_t
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
