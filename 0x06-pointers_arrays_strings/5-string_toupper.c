#include "main.h"
/**
 *string _toupper - changes all lowercase string to uppercase
 *@s: string to be referenced.
 *Return: Always 0 success.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{	/*  Test if thy are small letters*/
		if (s[i] >= 97 &&  s[i] <= 122)
		{
		/* subtract 32 to convert to uppercase which strarts from 65 to 90*/
			s[i] = s[i] - 32;
		}
	i++;
	}
	return (s);
}
