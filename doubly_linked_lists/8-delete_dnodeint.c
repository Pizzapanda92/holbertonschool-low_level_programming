#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * index of a dlistint_t linked list
 *
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int current_index;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	current_index = 0;
	while (current != NULL && current_index < index)
	{
		current = current->next;
		current_index++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}

	free(current);
	return (1);
}
