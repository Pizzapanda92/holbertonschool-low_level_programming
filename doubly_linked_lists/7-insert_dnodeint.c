#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list
 * @idx: Index of the list where the new node should be added.
 * Index starts at 0
 * @n: Value to add to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int current_index;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	current = *h;
	current_index = 0;

	while (current != NULL && current_index < idx - 1)
	{
		current = current->next;
		current_index++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (current->next == NULL && current_index == idx - 1)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}
