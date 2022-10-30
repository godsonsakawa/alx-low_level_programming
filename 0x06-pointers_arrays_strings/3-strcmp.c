#include "main.h"
/**
 * _strcmp - compare two strings
 * @*s1: references the first string.
 * @*s2: references the second string.
 * Return: 0 Always success.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

