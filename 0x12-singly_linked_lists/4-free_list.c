#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a listint_t list.
 * @head: A pointer to the head of the list to be freed.
 *
 * Description: To free memory of a linked list, we need to traverse the list
 *		and free each node one by one.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;
		free(temp->str);
		free(temp);
	}
}
