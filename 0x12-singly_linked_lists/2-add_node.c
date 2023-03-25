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
	/* 1. allocate node */
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	size_t count;

	if (new_node == NULL)
		return (NULL);
	/* 2. put/Copy in the data  */
	new_node->str = strdup(str);

	for (count = 0; str[count]; count++)
	{
	}	
	new_node->len = count;
	/* 3. Make next of new node as head */
	new_node->next = *head;
	/* 4. move the head to point to the new node */
	*head = new_node;

	return (new_node);
}
