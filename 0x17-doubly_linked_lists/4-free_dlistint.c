#include "lists.h"
/**
  * free_dlistint - function that frees a dlistint_t list
  * @head: pointer to head node
  *
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
