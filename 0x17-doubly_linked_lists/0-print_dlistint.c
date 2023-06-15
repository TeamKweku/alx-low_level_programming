#include "lists.h"
/**
  * print_dlistint - function that prints all elements of a
  * dlistint_t list
  * @h: pointer to the head node
  *
  * Return: number of nodes in the dlistint_t
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
