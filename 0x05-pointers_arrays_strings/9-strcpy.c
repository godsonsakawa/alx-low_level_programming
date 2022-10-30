#include "main.h"
#include <string.h>
/**
  *_strcpy - copies a string
  *@dest:  the 1st string/destination string.
  *@src: references the 2nd string which is copied/ source string.
  *Return: Always 0 (success)
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = strlen(src);

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < len; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

