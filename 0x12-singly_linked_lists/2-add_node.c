#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
  * add_node - function that adds a new node at the beginning
  * of a list_t list
  * @head: pointer to head
  * @str: str to be copied to new node
  *
  * Return: address of the new element or NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int n;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	n = strlen(str);
	new_node->len = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
