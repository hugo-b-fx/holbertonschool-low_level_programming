#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dlistint - free the list
 * @head : the content of element
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *jsp;

	while (head)
	{
		jsp = head->next;
		free(head);
		head = jsp;
	}
}
