#include "lists.h"
/**
  * free_listint2 - function that frees a listint_t list
  * @head: pointer to head node
  *
  * Return: returns nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
