#include "main.h"
#include <string.h>
/**
  * _memcpy - copies memory area
  * @n: The number of bytes to be copied from src.
  * @src: The memory area where bytes are copied from.
  * @dest: The memory area where bytes are copied to.
  * Return: dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i = 0;

        while (i != n && src != '\0')
        {
                *dest++ = *src++;
                i++;
        }
        return (dest);
}
