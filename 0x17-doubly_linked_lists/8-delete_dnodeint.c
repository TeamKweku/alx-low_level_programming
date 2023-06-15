#include "lists.h"
/**
  * delete_dnodeint_at_index - function that deletes the node at
  * index index of a dlistint_t linked list
  * @head: pointer to address of head
  * @index: index to delete node
  *
  * Return: 1 (success) or -1 (failure)
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	current = *head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
