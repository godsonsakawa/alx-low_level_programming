#include "main.h"
/**
 * rev_string - reverse a string
 * @s: references a string.
 * Return: void.
 */
void rev_string(char *s)
{
	/*@i: references each element in an array*/
	int i = 0;
	/*@j: references each element from last to first*/
	int j = 0;
	/*@n: references the total number of elements in an array*/
	int n;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	/*reverse*/
	i--;

	while (i > j)
	{
		n = s[i];
		s[i--] = s[j];
		s[j++] = n;
	}
}

