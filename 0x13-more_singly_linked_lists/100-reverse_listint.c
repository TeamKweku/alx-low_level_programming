#include "lists.h"
/**
  * reverse_listint - function that reverses a listint_t
  * linked list
  * @head: pointer to head of node
  *
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;

	while ((*head)->next != NULL)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}

	(*head)->next = prev;

	return (*head);
}
