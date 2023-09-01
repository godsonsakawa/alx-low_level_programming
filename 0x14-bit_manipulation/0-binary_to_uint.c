#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: a pointer to a string of 0's an 1's
 *
 * Return: The converted number, or 0 if there's
 *        1 or more chars in the string b that is not
 *        0 or 1. also when b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);

	result = 0;
	while(*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
