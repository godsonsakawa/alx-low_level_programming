#include "lists.h"

/**
* insert_dnodeint_at_index - insert a node at a given position.
* @h: address of a pointer to a head.
* @idx: index of a list where a node should be added.
* @n: the node to be added.
* Return: The address of the node; Otherwise - NULL if it fails.
*/
/**
* 1. Start at the head node.
* 2. Initialize a counter to reference a respective node.
* 3. Traverse the list to insert the node at respective index.
* 4. Return the address of the node else NULL if it doesn't exist.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *current = *h;
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    unsigned int counter = 0;

    if (idx == 0)
    {
        newNode->next = *h;
        newNode->prev = NULL;
        newNode->n = n;
        (*h)->prev = newNode;
        *h = newNode;  
    }
    else
    {
        while (current->next != NULL && counter !=  idx)
        {
            current = current->next;
            counter++;
        }
        if (counter == idx)
        {

            if (newNode == NULL)
            {
                return (NULL);
            }
            newNode->n = n;
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next != NULL)
            {
                current->next->prev = newNode;
            }
            current->next = newNode;
                       
            return (newNode);
        }
    }
}
