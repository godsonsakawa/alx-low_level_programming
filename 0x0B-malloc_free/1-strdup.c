#include "main.h"
#include <stdlib.h>
/**
  * _strdup - copies of the string
  *            given as a parameter.
  * @str: string to be duplicated.
  * Return: a pointer to duplicated string..
  *         Otherwise - is string is NULL - NULL
  */
char * _strdup(char *str)
{
	char *copy;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[len] = '\0';

	return (copy);
}	
