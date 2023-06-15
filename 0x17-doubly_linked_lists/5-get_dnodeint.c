#include "lists.h"
/**
  * get_dnodeint_at_index - function that returns the nth
  * node of a dlistint_t linked list
  * @head: pointer to the head node
  * @index: index of nth node
  *
  * Return: nth node or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i, count;

	if (head == NULL)
		return (NULL);
	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
