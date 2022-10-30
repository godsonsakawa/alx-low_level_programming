#include "main.h"
#include <string.h>
/**
  * _strcat - concatenates two strings.
  *@dest: references the first string.
  *@src: references the second string that gets appended to dest.
  * Return: Always 0 (success)
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = strlen(dest);

	for (i = 0; i <= 7; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
