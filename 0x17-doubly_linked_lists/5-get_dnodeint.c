#include "lists.h"

/**
* get_dnodeint_at_index - fetch the nth node in a list.
* @head: pointer to the head of a list.
* @index: index of a given node.
* Return: The nth node Otherwise NULL
*/
/**
* 1. Start with the head node of the list
* 2. Initialize a counter to 0; representing the current position of the node
* 3. Traverse the list until the end of the list or desired index(position). 
* 4. If the current position is equal to n; return the references node.
* 5. If not update the counter by incrementing by 1.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    int counter = 0;
    
    while (current->next != NULL && counter != index)
    {
        current = current->next;
        counter++;
    }
    if (counter == index)
    {
        return (current);
    }
    else
    {
        return NULL;
    }
    
}
