#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: head
 * @idx: index of node
 * @n: element of node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;

	if (new == NULL)
		return (NULL);

	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
	}
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
