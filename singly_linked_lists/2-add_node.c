#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new note at the beginning of a list_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @str: The string to be added to the new note.
 *
 * Return: NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
