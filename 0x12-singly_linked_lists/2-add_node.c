#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * add_node - adds a new node at the beginning of a list.
  * @str: refers to the data to be added.
  * @head: refers  to the head node.
  * Return: address of the new element.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	size_t nodePtr;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nodePtr = 0; str[nodePtr]; nodePtr++)
	{
	}

	new_node->len = nodePtr;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
