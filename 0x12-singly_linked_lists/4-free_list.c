#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a listint_t list.
 * @head: A pointer to the head of the listint list to be freed.
 *
 * Description: To free memory of a linked list, we need to traverse the list
 *		and free each node one by one. For each node in the list,
 *		we store the current node in a temporary pointer variable (temp),
 *		move to the next node using the next pointer,
 *		and free the memory for the node stored in temp.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;
		free(temp);
	}
}
