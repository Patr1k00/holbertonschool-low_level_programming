#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function free
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
