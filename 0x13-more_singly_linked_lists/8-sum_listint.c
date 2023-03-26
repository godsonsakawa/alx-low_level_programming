#include "lists.h"

/**
 * sum_listint - sum of all the data in the list.
 *
 * Return - If list is empty - 0.
 * 		Otherwise - sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
