#include "lists.h"

/**
 * pop_listint - delete the head node and return the head node data.
 * @head: A pointer to the address of the head of the listint_t lists.
 *
 * Return: If the lisrt is empty - 0
 * 	   Otherwise: The head node's data.
 *
 * Description: To delete the head node, update the head pointer to point to
 * 		the original next node.
 * 		Free the memory allocated to the original head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int node_data;

	if (*head == NULL)
	{
		return (0);
	}
	
	current = *head;
	node_data = current->n;
	*head = current->next;
	free(current);
	return (node_data);
}
