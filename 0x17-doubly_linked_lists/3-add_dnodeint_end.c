#include "lists.h"
/**
  * add_dnodeint_end - function that adds a new node
  * at the end of a dlistint_t list
  * @head: pointer to address of head
  * @n: value to add at end node
  *
  * Return: address of new_element or NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;

		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	new_node->prev = last_node;

	return (new_node);
}
