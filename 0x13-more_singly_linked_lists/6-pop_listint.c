#include <stdlib.h>
#include "lists.h"
/**
  * pop_listint - function that deletes the head node of a
  * listint_t linked list
  * @head: pointer to the head node
  *
  * Return: the head node's data (n)
  */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	*head = (*head)->next;
	temp->next = NULL;
	free(temp);

	return (value);
}
