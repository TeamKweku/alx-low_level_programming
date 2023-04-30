#include <stdio.h>
#include "lists.h"
/**
  * get_loop_len_int - function that counts a listint_t linked
  * list and checkss if there is a loop in linked list
  * using the Floyd's cycle finding algorithm
  * @head: pointer to head node
  *
  * Return: returns number of nodes in list
  */
size_t get_loop_len_int(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow_ptr = head->next;
	fast_ptr = head->next->next;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
				count++;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				count++;
			}

			return (count);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	return (0);
}

/**
  * free_listint_safe - function that frees a listint_ list
  * @h: a double pointer to head
  *
  * Return: the size of the list that was free'd
  *
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count, i;

	count = get_loop_len_int(*h);

	if (count == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}

		*h = NULL;
	}

	h = NULL;

	return (i);
}
