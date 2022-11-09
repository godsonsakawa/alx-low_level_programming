#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - creates an array of chars.
  * @c: used to initialize the array of chars.
  * @size: size of memory to be created.
  * Return: address of memory to be created.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *A;

	if (size == 0)
	{
		return (NULL);
	}
	/* returns a pointer to the allocated memory*/
	A = (char *) malloc(size * sizeof(char));

	if (A == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		A[i] = c;
		i++;
	}
	return (A);
}

