#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_strings - prints numbers
  * @n: is the number of strings passed to the function
  * @separator: is the string to be printed between strings
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);/* Initialize the argument list*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", str);
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(string);
	printf("\n");
}
