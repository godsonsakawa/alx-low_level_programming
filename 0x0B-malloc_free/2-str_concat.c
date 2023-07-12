#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatentenates two strings.
  * @s1: string to appended with contents of s1
  * @s2: string to be copied to s1
  * Return: a pointer that points to contents of s1
  *         followed by contents of s2
  *         Otherwise: NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len = 0, index, index2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}

	concat = malloc(sizeof(char) * (len));

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
	{
		concat[index2++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		concat[index2++] = s2[index];
	}

	return (concat);
}
