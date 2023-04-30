#include <stdlib.h>
#include "lists.h"
/**
  * delete_nodeint_at_index - function that deletes the node at index
  * of a listint_t linked list
  * @head: pointer to head of node
  * @index: index of node to be deleted
  *
  * Return: success (1) or failed (-1)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *prev = NULL;
	listint_t *curr = NULL;

	if (*head == NULL)
		return (-1);
	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (curr != NULL && count < index)
	{
		prev = curr;
		curr = curr->next;
		count++;
	}

	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	free(curr);

	return (1);
}
