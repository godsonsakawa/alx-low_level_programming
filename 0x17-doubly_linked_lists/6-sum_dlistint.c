#include "lists.h"

/**
* sum_dlistint - sums of all the data in a list
* @head: A pointer to the head of a list
* Return: Sum of the lists else 0 if empty list.
*/
/**
* 1. Start from the head node.
* 2. Initialize a counter to add each element.
* 3. Traverse each node while summing the elements.
* 4. Return the sum else 0 if empty list.
*/
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    int count = 0;

    if (head == NULL)
    {
        return (0);
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
            count += current->n;
        }
        return (count);
    }
}
