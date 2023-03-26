#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given index.
 *
 * @idx: index of the list where the node should be added.
 * @head: Pointer to the address of the head of our list.
 * @n: The integer the new node to contain.
 *
 * Return: The new address of the new node.
 *		Otherwise if it fails - NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int node;

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 1)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < idx - 1 && current != NULL; node++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
