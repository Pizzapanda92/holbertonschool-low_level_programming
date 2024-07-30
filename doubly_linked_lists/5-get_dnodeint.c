#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int current_index = 0;

	while (current != NULL)
	{

		if (current_index == index)
		{
			return (current);
		}
		current = current->next;
		current_index++;
	}

	return (NULL);
}
