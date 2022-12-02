#include "lists.h"

/**
  * add_nodeint_end - add a new node at the end of a list.
  * @head: a pointer to the address of the head of the list.
  * @n: integer the new node contains.
  * Return: if the function fails - NULL
  *         Otherwise - address of the new elements.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}
